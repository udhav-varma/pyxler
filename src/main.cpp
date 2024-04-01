#include <bits/stdc++.h>
#include <string>
#include "node.hpp"

symbol_table * present_table;

string tempprint(temp_var * temp)
{
    return "$"s + to_string(temp->id);
}


int for_id = 0, while_id = 0, if_id = 0, elif_id = 0;
stack<pair<string, int>> loop_stack;
stack<int> if_stack;

void make_3ac(node * root)
{
    // cerr << "err " << root->name << '\n';
    if(root->type == "nt"){
        // for(auto r: root->children){
        //     if(r){
        //         make_3ac(r);
        //         root->code.insert(root->code.end(), r->code.begin(), r->code.end());
        //     }
        // }
        vector<quad> beg_code, end_code;
        if(root->name == "file_input"){ // checked
            // cerr << "enter\n";
            for(auto r: root->children){
                // cerr << "r0 " << r << '\n';
                if(r){
                    make_3ac(r);
                    // cerr << "r\n";
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }   
        else if(root->name == "nstatement"){ // checked
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "funcdef"){   // TODO
        // cerr << root->children.size() << '\n';
            for(int i = 0; i < 6; i++){
                // cerr << root->children[i]->name << '\n';
                if(root->children[i]){
                    // cerr << "enter\n";
                    make_3ac(root->children[i]);
                    root->code.insert(root->code.end(), root->children[i]->code.begin(), root->children[i]->code.end());
                }
            }
            root->info = new funcdef();
            funcdef * info = (funcdef *) root->info;
            info->name = root->children[1]->name;
            info->args = ((funcarglist *) root->children[2]->info);
            // cerr << "here " << info->args->args.size() << '\n';
            // cerr << "rname " << root->children[4]->data_type << '\n';
            info->returntype = ((atom_expr_name *) root->children[4]->info)->name;
            beg_code.push_back(quad("beginfunc"s + info->name, "", "label", ""));
            //PUSHPARAMS
            symbol_table * fun_table = new symbol_table(FUNCTION_TABLE, present_table, info->name);
            present_table->add_entry_fun(fun_table);
            present_table = fun_table;
            fun_table->args = info->args->args;
            for(auto x: info->args->args){
                auto en = new symbol_table_entry(x->name, x->type, present_table);
                beg_code.push_back(quad("", "", "popparam", x->name));
                present_table->add_entry_var(en);
            }
            make_3ac(root->children[6]);
            root->code.insert(root->code.end(), root->children[6]->code.begin(), root->children[6]->code.end());
            present_table = present_table->parent;
            end_code.push_back(quad("endfunc"s + info->name, "", "label", ""));
        }
        else if(root->name == "parameters"){ // checked
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarglist();
            funcarglist * info = (funcarglist *) root->info;
            if(root->children.size()  == 3){
                // cerr << "name " << root->children[1]->name << '\n';
                info->args = ((funcarglist *) root->children[1]->info)->args;
                // cerr << root->children[1]->info << '\n';
            }
            // cerr << "Param " << info->args.size() << '\n';
            //TODO this and funcdef
        }
        else if(root->name == "typedarglist"){ // TODO: error handling
            // cerr << "Enter typedarglist\n";
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            // cerr << root << " sz " << root->children.size() << '\n';
            root->info = new funcarglist();
            funcarglist * info = (funcarglist *) root->info;
            if(root->children[0]->name == "tfpdef"){
                // cerr << "enter \n";
                info->args.push_back(((funcarg *) root->children[0]->info));
                if(root->children.size() > 1 and root->children[1] != NULL){
                    info->args[0]->defval = root->children[1]->children[1]->temp;
                }
            }
            else{
                root->info = info = (funcarglist *) root->children[0]->info;
                funcarg * narg = (funcarg*) root->children[2]->info;
                if(root->children.size() > 3 and root->children[3] != NULL){
                    narg->defval = root->children[3]->children[1]->temp;
                }
                info->args.push_back(narg);
                // cerr << "here inof " << info->args.size() << '\n';
                // cerr << info << '\n';
            }
        }
        else if(root->name == "tfpdef"){ // TODO: error handling
        // cerr << "Enter tfpdef\n";
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarg();
            funcarg * info = (funcarg *) root->info;
            info->name = root->children[0]->name;
            if(root->children[2]->data_type == "atom_expr_name"){
                info->type = ((atom_expr_name *) root->children[2]->info)->name;
            }
            else{
                cerr << "Invalid type for argument";
                exit(0);
            }
        }
        else if(root->name == "simple_stmt"){ // checked
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "small_stmts"){ // checked
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        } 
        else if(root->name == "expr_stmt"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() > 1){
                if(root->children[1]->name == "annasign"){
                    // cerr << "here\n";
                    if(root->children[0]->data_type != "atom_expr_name"){
                        cerr << "Invalid declaration\n";
                        exit(0);
                    }
                    else{
                        //TODO: checking in current level
                        root->info = root->children[1]->info;
                        annasign * info = ((annasign *) root->info);
                        info->name = ((atom_expr_name*) root->children[0]->info)->name;
                        symbol_table_entry * newentry = new symbol_table_entry(((atom_expr_name*) root->children[0]->info)->name, ((annasign*) root->children[1]->info)->type, present_table);
                        present_table->add_entry_var(newentry);
                        if(((annasign*) root->children[1]->info)->inval != NULL)
                            root->code.push_back(quad(tempprint(((annasign*) root->children[1]->info)->inval), "", "", ((atom_expr_name*) root->children[0]->info)->name));
                        // else
                            // cerr << "invalnull\n";
                    }
                }
                else if(root->children[1]->name == "="){
                
                    if(root->children[0]->data_type != "atom_expr_name"){
                        cerr << "Invalid declaration\n";
                        exit(0);
                    }
                    else{
                        // cerr << root->children.size() << '\n';
                        string name = ((atom_expr_name *) root->children[0]->info)->name;
                        if(present_table->find_var_entry(name) == NULL){
                            cerr << "variable not declared for assignment\n";
                            exit(0);
                        }
                        else{
                            // if(root->children[2]->temp == NULL) cerr << "isnull\n";
                            root->code.push_back(quad(tempprint(root->children[2]->temp), "", "", name));
                        }
                    }
                }
                else{
                    //todo augassign
                }
            }
        }
        else if(root->name == "annasign"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            // if(root->children[1]->info == NULL) cerr << "isnull\n";
            string type = ((atom_expr_name *) root->children[1]->info)->name;
            root->info = new annasign();
            annasign * info = (annasign *) root->info;
            info->type = type;
            if(root->children.size() == 4){
                info->inval = root->children[3]->temp;
            }
        }
        else if(root->name == "cond_eqtest"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "break_stmt"){
            if(loop_stack.empty()){
                cerr<<"Incorrect placement of break\n";
                exit(0);
            }
            if(loop_stack.top().first == "for"){
                root->code.push_back(quad("", "", "goto", "endfor"s + to_string(loop_stack.top().second)));
            }
            else if(loop_stack.top().first == "while"){
                root->code.push_back(quad("", "", "goto", "endwhile"s + to_string(loop_stack.top().second)));
            }
        }
        else if(root->name == "continue_stmt"){
            if(loop_stack.empty()){
                cerr<<"Incorrect placement of continue\n";
                exit(0);
            }
            if(loop_stack.top().first == "for"){
                root->code.push_back(quad("", "", "goto", "beginfor"s + to_string(loop_stack.top().second)));
            }
            else{
                root->code.push_back(quad("", "", "goto", "beginwhile"s + to_string(loop_stack.top().second)));
            }
        }
        else if(root->name == "return_stmt"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->code.push_back(quad("", "", "return", ""));
            }
            else{
                root->code.push_back(quad("", tempprint(root->children[1]->temp), "return", ""));
            }
        }
        else if(root->name == "global_stmt"){

        }
        else if(root->name == "namelist"){

        }
        else if(root->name == "if_stmt"){
            for(int i = 0; i < 4; i++){
                if(root->children[i]){
                    make_3ac(root->children[i]);
                }
            }
            root->code = root->children[3]->code;
            if_id++;
            if_stack.push(if_id);
            beg_code.push_back(quad("beginif"s + to_string(if_id), "", "label", ""));
            beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
            beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endif"s + to_string(if_id)));
            root->code.push_back(quad("", "", "goto", "endifblock"s + to_string(if_id)));
            root->code.push_back(quad("endif"s + to_string(if_id), "", "label", ""));
            for(int i = 4; i < root->children.size(); i++){
                if(root->children[i]){
                    make_3ac(root->children[i]);
                    root->code.insert(root->code.end(), root->children[i]->code.begin(), root->children[i]->code.end());
                }
            }
            end_code.push_back(quad("endifblock"s + to_string(if_id), "", "label", ""));
            if_stack.pop();
        }
        else if(root->name == "cond_else_colon_suite"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "close_eliftestsuite"){
            for(auto r: root->children){
                if(r)
                    make_3ac(r);
            }
            if(root->children.size() == 5){
                root->code.insert(root->code.end(), root->children[0]->code.begin(), root->children[0]->code.end());
            }  
            elif_id++;
            root->code.insert(root->code.end(), root->children.end()[-3]->code.begin(), root->children.end()[-3]->code.end());
            root->code.push_back(quad("if_false", tempprint(root->children.end()[-3]->temp), "goto", "endelif"+to_string(elif_id)));
            root->code.insert(root->code.end(), root->children.back()->code.begin(), root->children.back()->code.end());
            root->code.push_back(quad("", "", "goto", "endifblock"s + to_string(if_stack.top())));
            root->code.push_back(quad("endelif"s + to_string(elif_id), "", "label", ""));
        }
        else if(root->name == "while_stmt"){
            while_id++;
            loop_stack.push({"while", while_id});
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                }
            }
            root->code = root->children[3]->code;
            beg_code.push_back(quad("beginwhile"s + to_string(while_id), "", "label", ""));
            beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
            beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endwhile"s + to_string(while_id)));
            end_code.push_back((quad("", "", "goto", "beginwhile"s + to_string(while_id))));
            end_code.push_back(quad("endwhile"s + to_string(while_id), "", "label", ""));   
            loop_stack.pop();
        }
        else if(root->name == "for_stmt"){
            for_id++;
            loop_stack.push({"for", for_id});
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                }
            }
            root->code = root->children[5]->code;
            if(root->children[3]->data_type == "funccall"){
                funccall * info = (funccall *)root->children[3]->info;
                // cerr << "argls size " << info->arglist.size() << '\n';
                if(info->funcname != "range"){
                    cerr << "For loop: only range(n) type functions allowed\n";
                    exit(0);
                }
                else if(info->arglist.size() != 1){
                    cerr << "For loop: only range(n) type args allowed\n";
                    exit(0);
                }
                // cerr << info->funcname << '\n';
                temp_var * upbound = info->arglist[0]->temp;
                temp_var * itervar = new temp_var("uint");
                beg_code.insert(beg_code.end(), root->children[3]->code.begin(), root->children[3]->code.end());
                beg_code.push_back(quad("beginfor"s + to_string(for_id), "", "label", ""));
                beg_code.push_back(quad("0", "", "", tempprint(itervar)));
                temp_var * comp_res = new temp_var("bool");
                // cerr << "upb\n";
                // cerr << upbound << '\n';
                tempprint(upbound);
                beg_code.push_back(quad(tempprint(itervar), tempprint(upbound), "<", tempprint(comp_res)));
                beg_code.push_back(quad("if_false", tempprint(comp_res), "goto", "endfor"s + to_string(for_id)));
                end_code.push_back(quad(tempprint(itervar), "1", "+", tempprint(itervar)));
                end_code.push_back(quad("", "", "goto", "beginfor"s + to_string(for_id)));
                end_code.push_back(quad("endfor"s + to_string(for_id), "", "label", ""));
            }   
            else{
                cerr << "For loop: only for using range(n) call is supported";
                exit(0);
            }
            loop_stack.pop();
        }
        else if(root->name == "suite"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "plus_stmt"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "test"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->data_type = root->children[0]->data_type;
            root->info = root->children[0]->info;
            root->temp = root->children[0]->temp;
            // if(root->children[0]->temp != NULL){
            //     // root->temp = new temp_var(root->children[0]->temp->type);
            //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            // }
            // cerr << "rdt " << root->data_type << '\n';
            // cerr << root->code.size() << '\n';
        }
        else if(root->name == "or_test"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     // root->temp = new temp_var(root->children[0]->temp->type);
                //     // root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "and_test"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "not_test"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[1]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[1]->temp), "NOT", tempprint(root->temp)));
            }
        }
        else if(root->name == "comparison"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "xor_expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "and_expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "shift_expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "arith_expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // root->temp = new temp_var(root->children[0]->temp->type);
                // root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
            }
        }
        else if(root->name == "term"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
                // if(root->children[0]->temp != NULL){
                //     root->temp = new temp_var(root->children[0]->temp->type);
                //     root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
                // }
            }
            else{
                // cerr << root->children[0]->temp << ' ' << root->children[2]->temp << '\n';
                root->temp = new temp_var(root->children[0]->temp->type);
                //TODO: typechecking
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
            }
        }
        else if(root->name == "factor"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 2){
                if(root->children[1]->temp == NULL || root->children[1]->temp->type != "uint"){
                    cerr << "TypeError: Unary operation unsupported on this type\n";
                    exit(0);
                }
            }
            else{
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
            }
        }
        else if(root->name == "power"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
            }
            else if(root->children.size() == 3){
                if(root->children[2]->temp != NULL and root->children[2]->temp->type == "uint"){
                    //TODO - implement power;
                }
                else{
                    cerr << "TypeError: power operation not defined for these operands";
                    exit(0);
                }
            }
        }
        else if(root->name == "atom_expr"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 1){
                if(root->children[0]->data_type == "name_type"){
                    root->data_type = "atom_expr_name";
                    root->info = new atom_expr_name();
                    atom_expr_name * info = (atom_expr_name *) root->info;
                    info->name = ((name_type *)root->children[0]->info)->name_val;
                    // cerr << "here " << info->name << '\n';
                    root->temp = root->children[0]->temp;
                    // cerr << "addr2 " << root->temp << '\n';
                    if(present_table->find_var_entry(info->name)){
                        root->temp = new temp_var("name");
                        root->code.push_back(quad(info->name, "", "", tempprint(root->temp)));
                    }
                }
                else if(root->children[0]->data_type == "num_type"){
                    // cerr << "here\n";
                    root->data_type = "atom_expr_number";
                    root->info = new atom_expr_number();
                    atom_expr_number * info = (atom_expr_number *) root->info;
                    info->num = ((num_type *) root->children[0]->info)->number;
                    if(((num_type *) root->children[0]->info)->is_uint){
                        root->temp = new temp_var("uint");
                        // cerr << "here uint " << info->num << '\n';
                        // cerr << root->temp << '\n';
                    }
                    else{
                        root->temp = new temp_var("number");
                    }
                    root->code.push_back(quad(info->num, "", "", tempprint(root->temp)));
                }
                else if(root->children[0]->data_type == "keyword_type"){
                    root->data_type = "atom_expr_keyword";
                    root->info = new atom_expr_keyword();
                    atom_expr_keyword * info = (atom_expr_keyword *) root->info;
                    info->keyword = ((keyword_type *) root->children[0]->info)->keyword;
                }
                else if(root->children[0]->data_type == "sqbrackettestlist_type"){
                    root->data_type = "atom_expr_list";
                    root->info = new atom_expr_list();
                    atom_expr_list * info = (atom_expr_list *) root->info;
                    info->tstlist = ((sqbrackettestlist_type *)(root->children[0]))->sqbrackettestlist_vars;
                }
                else if(root->children[0]->data_type == "brack_test_type"){
                    root->temp = root->children[0]->temp;
                }
            }
            else if(root->children.size() == 2){
                if(root->children[1]->data_type == "funccall"){
                    if(root->children[0]->data_type == "name_type"){
    //                     cerr << "rsz " << root->code.size() << '\n';
    //                     for(auto x: root->code){
    //     cerr << x.result << " = " << x.arg1 << ' ' << x.op << ' ' << x.arg2 << '\n';
    // }
                        root->data_type = "funccall";
                        root->info = root->children[1]->info;
                        funccall * info = (funccall *) root->info;
                        // cerr << "fninfo " << info->funcname << ' ' << info->arglist[0]->temp << '\n';
                        // if(root->children[1]->data_type != "arglist_type") cerr << "wrong type\n";
                        // info->arglist = ((arglist_type *) root->children[1]->info)->args;
                        // cerr << "funccall " << info->arglist.size() << '\n';
                        info->funcname = ((name_type *) root->children[0]->info)->name_val;
                        if(!present_table->find_fun_entry(info->funcname)){
                            if(info->funcname != "len" and info->funcname != "range" and info->funcname != "print"){
                                cerr << "Function " + info->funcname << " not defined\n";
                                exit(0);
                            }
                        }
                        root->temp = new temp_var(present_table->find_fun_entry(info->funcname)->returntype);
                        auto func = present_table->find_fun_entry(info->funcname);
                        for(auto it = info->arglist.rbegin(); it != info->arglist.rend(); it++){
                            root->code.push_back(quad("", "", "param", tempprint((*it)->temp)));
                        }
                        root->code.push_back(quad(info->funcname, to_string(info->arglist.size()), "callfunc", ""));
                        root->code.push_back(quad("", "", "popreturn", tempprint(root->temp)));
                    }
                    else{
                        cerr << "Error: Invalid function call, not a proper name";
                        exit(0);
                    }
                }
                else if(root->children[1]->data_type == "arr_access"){
                    if(root->children[0]->data_type == "name_type"){
                        root->data_type = "arr_access";
                        root->info = root->children[1]->info;
                        arr_access * info = (arr_access *) root->info;
                        info->name = ((name_type *) root->children[0]->info)->name_val;
                        if(!present_table->find_var_entry(info->name)){
                            cerr << "Array " << info->name << " not defined\n";
                            exit(0);
                        }
                        root->temp = new temp_var(present_table->find_var_entry(info->name)->type);
                        temp_var * derefpos = new temp_var("int");
                        root->code.push_back(quad("", info->name + "+" + tempprint(info->accessind), "*", tempprint(derefpos)));
                        root->code.push_back(quad("", tempprint(derefpos), "", tempprint(root->temp)));
                    }
                    else{
                        cerr << "Error: Invalid Array\n";
                        exit(0);
                    }
                }
                else{
                    //TODO - object attr access
                }
            }
            else if(root->children.size() == 3){
                // TODO obj func call
            }
        }
        else if(root->name == "atom"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children.size() == 3 && root->children[0]->name == "["){
                root->data_type = "sqbrackettestlist_type";
                root->info = new sqbrackettestlist_type();
                sqbrackettestlist_type * info = (sqbrackettestlist_type *) root->info;
                info->sqbrackettestlist_vars = ((testlist_type *) root->children[1]->info)->testlist_vars;
            }
            else if(root->children.size() == 3 and root->children[0]->name == "("){
                root->data_type = "brack_test_type";
                root->temp = root->children[1]->temp;
                // cerr << "addr " << root->temp << '\n';
            }
            else if(root->children.size() == 2){
                root->data_type = "sqbrackettestlist_type";
                root->info = new sqbrackettestlist_type();
                sqbrackettestlist_type * info = (sqbrackettestlist_type *) root->info;
            }
            else{
                if(root->children[0]->data_type == "name_type"){
                    // cerr << "nm " << root->children[0]->name << '\n';
                    if(present_table->find_var_entry(root->children[0]->name)){
                        root->temp = new temp_var("name");
                        root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                    }
                }
                else if(root->children[0]->name == "NUMBER"){
                    root->temp = new temp_var("number");
                    root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                }
                else if(root->children[0]->name == "STRING"){
                    root->temp = new temp_var("string");
                    root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                }
                root->info = root->children[0]->info;
                root->data_type = root->children[0]->data_type;
                // cerr << "rdt " << root->data_type << '\n';
            }
        }
        else if(root->name == "testlist"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->data_type = "testlist_type";
            root->info = new testlist_type();
            testlist_type * info = ((testlist_type *) root->info);
            if(root->children.size() == 3){
                info->testlist_vars = ((testlist_type *) root->children[0]->info)->testlist_vars;
            }
            info->testlist_vars.push_back(((test_type *) root->children.back()->info)->temp);
        }
        else if(root->name == "trailer"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            if(root->children[0]->name == "("){ 
                root->data_type = "funccall";
                root->info = new funccall();
                funccall * info = (funccall *) root->info;
                if(root->children[1] != NULL){
                    // cerr << root->children[1] << ' ' << root->children[1]->name << '\n';
                    info->arglist = ((arglist_type*) root->children[1]->info)->args;
                    // cerr << "Adding " << ((arglist_type*) root->children[1]->info)->args.size() << '\n';
                    // cerr << "Argtemp " << info->arglist[0]->temp << '\n';
                }
            }
            else if(root->children[0]->name == "["){
                root->data_type = "arr_access";
                root->info = new arr_access();
                arr_access * info = (arr_access *) root->info;
                info->accessind = ((test_type*) root->children[1]->info)->temp;
            }
            else if(root->children[0]->name == "."){ // Class Attr
                //TODO
            }
        }
        else if(root->name == "subscriptlist"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }

        }
        else if(root->name == "exprlist"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }

        }
        else if(root->name == "classdef"){

        }
        else if(root->name == "cond_parentheses_arglist"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }

        }
        else if(root->name == "arglist"){
            // cerr << "enter arglist\n";
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            // cerr << "here\n";
            root->data_type = "arglist_type";
            root->info = new arglist_type();
            arglist_type * info = (arglist_type *) root->info;
            if(root->children.size() == 3){
                info->args = ((arglist_type *) root->children[0]->info)->args;
            }
            info->args.push_back((arg_type*)root->children.back()->info);
            // cerr << "arrgsz " << info->args.size() << '\n';
            // cerr << "arrinfo " << ' ' << info <<  ' ' << info->args[0]->temp << '\n';
            // cerr << root << '\n';
        }
        else if(root->name == "argument"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->data_type = "arg_type";
            root->info = new arg_type();
            arg_type* info = (arg_type *) root->info;
            info->temp = root->children[0]->temp;
            // cerr << "Argument info " << info << ' ' << (arg_type *)info->temp << '\n';
        }
        root->code.insert(root->code.begin(), beg_code.begin(), beg_code.end());
        root->code.insert(root->code.end(), end_code.begin(), end_code.end());
    }
    else{
        if(root->type == "KEYWORD"){
            root->data_type = "keyword_type";
            root->info = new keyword_type();
            keyword_type * info = (keyword_type *) root->info;
            info->keyword = root->name;
        }
        else if(root->type == "DELIMITER"){
            root->data_type = "delim_type";
            root->info = new delim_type();
            delim_type * info = (delim_type *) root->info;
            info->delim = root->name;
        }
        else if(root->type == "IDENTIFIER"){
            root->data_type = "name_type";
            root->info = new name_type();
            name_type * info = (name_type *) root->info;
            info->name_val = root->name;
        }
        else if(root->type == "NUMBER"){
            root->data_type = "num_type";
            root->info = new num_type();
            num_type * info = (num_type *) root->info;
            info->number = root->name;
            char c; bool f = true;
            for(auto c: root->name){
                if(c < '0' || c > '9') f = false;
            }
            if(f) info->is_uint = true;
        }
        else if(root->type == "OPERATOR"){
            root->data_type = "op_type";
            root->info = new op_type();
            op_type * info = (op_type *) root->info;
            info->op = root->name;
        }
        else if(root->type == "STRING"){
            root->data_type = "str_type";
            root->info = new str_type();
            str_type * info = (str_type*)root->info;
            info->str = root->name;
        }
        else if(root->type == "NEWLINE"){
            // ignore
        }
        else if(root->type == "INDENT"){
            // ignore
        }
        else if(root->type == "DEDENT"){
            // ignore
        }
        else if(root->type == "END"){
            // ignore
        }
    }
}