#include <bits/stdc++.h>
#include <string>
#include "node.hpp"

symbol_table * present_table;

string tempprint(temp_var * temp)
{
    return "$"s + to_string(temp->id);
}

int for_id = 0, while_id = 0, if_id = 0;

void make_3ac(node * root)
{
    if(root->type == "nt"){
        // for(auto r: root->children){
        //     if(!r){
        //         make_3ac(r);
        //         root->code.insert(root->code.end(), r->code.begin(), r->code.end());
        //     }
        // }
        vector<quad> beg_code, end_code;
        if(root->name == "file_input"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }   
        else if(root->name == "nstatement"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "funcdef"){

        }
        else if(root->name == "parameters"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarglist();
            funcarglist * info = (funcarglist *) root->info;
            if(root->children[1] != NULL){
                info->args = ((funcarglist *) root->children[1]->info)->args;
            }
            //TODO this and funcdef
        }
        else if(root->name == "typedarglist"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarglist();
            funcarglist * info = (funcarglist *) root->info;
            if(root->children.size() == 2){
                info->args.push_back(((funcarg *) root->children[0]->info));
                if(root->children[1] != NULL){
                    info->args[0]->defval = root->children[1]->children[1]->temp;
                }
            }
            else{
                funcarg * narg = (funcarg*) root->children[2]->info;
                if(root->children[3] != NULL){
                    narg->defval = root->children[3]->children[1]->temp;
                }
                info->args.push_back(narg);
            }
        }
        else if(root->name == "tfpdef"){
            for(auto r: root->children){
                if(!r){
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
        else if(root->name == "simple_stmt"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "small_stmts"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "expr_stmt"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            
        }
        else if(root->name == "annasign"){
            for(auto r: root->children){
                if(!r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }

        }
        else if(root->name == "cond_eqtest"){

        }
        else if(root->name == "break_stmt"){

        }
        else if(root->name == "continue_stmt"){

        }
        else if(root->name == "return_stmt"){

        }
        else if(root->name == "global_stmt"){

        }
        else if(root->name == "namelist"){

        }
        else if(root->name == "if_stmt"){
            root->code = root->children[3]->code;
            if_id++;
            beg_code.push_back(quad("beginif"s + to_string(if_id), "", "label", ""));
            beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
            beg_code.push_back(quad("", "", "goto", "endifblock"s + to_string(if_id)));
            end_code.push_back(quad("endif"s + to_string(if_id), "", "label", ""));
            beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endif"s + to_string(if_id)));
            if(root->children[4] != NULL) end_code.insert(end_code.end(), root->children[4]->code.begin(), root->children[4]->code.end());
            if(root->children[4] != NULL) end_code.insert(end_code.end(), root->children[4]->code.begin(), root->children[4]->code.end());
        }
        else if(root->name == "cond_else_colon_suite"){

        }
        else if(root->name == "close_eliftestsuite"){

        }
        else if(root->name == "while_stmt"){
            if(root->children.size() == 4){
                root->code = root->children[3]->code;
                while_id++;
                beg_code.push_back(quad("beginwhile"s + to_string(while_id), "", "label", ""));
                beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
                beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endwhile"s + to_string(while_id)));
                end_code.push_back((quad("", "", "goto", "beginwhile"s + to_string(while_id))));
                end_code.push_back(quad("endwhile"s + to_string(while_id), "", "label", ""));   
            }
            else{
                //TODO
            }
        }
        else if(root->name == "for_stmt"){
            if(root->children.size() == 6){
                if(root->children[3]->data_type == "funccall"){
                    funccall * info = (funccall *)root->children[3]->info;
                    if(info->funcname != "range"){
                        cerr << "For loop: only range(n) type functions allowed\n";
                        exit(0);
                    }
                    else if(info->arglist.size() != 1){
                        cerr << "For loop: only range(n) type args allowed\n";
                        exit(0);
                    }
                    temp_var * upbound = info->arglist[0]->temp;
                    temp_var * itervar = new temp_var("uint");
                    for_id++;
                    beg_code.push_back(quad("beginfor"s + to_string(for_id), "", "label", ""));
                    beg_code.push_back(quad(0, "", "", tempprint(itervar)));
                    temp_var * comp_res = new temp_var("bool");
                    beg_code.push_back(quad(tempprint(itervar), tempprint(upbound), "<", tempprint(comp_res)));
                    beg_code.push_back(quad("if_false", tempprint(comp_res), "goto", "endfor"s + to_string(for_id)));
                    end_code.push_back(quad("", "", "goto", "beginfor"s + to_string(for_id)));
                    end_code.push_back(quad("endfor"s + to_string(for_id), "", "label", ""));
                }   
                else{
                    cerr << "For loop: only for using range(n) call is supported";
                    exit(0);
                }
            }
            else{

            }
        }
        else if(root->name == "suite"){

        }
        else if(root->name == "plus_stmt"){

        }
        else if(root->name == "test"){
            root->data_type = root->children[0]->data_type;
            root->info = root->children[0]->info;
            root->temp = new temp_var(root->children[0]->temp->type);
            root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));   
        }
        else if(root->name == "or_test"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "and_test"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "not_test"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[1]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[1]->temp), "NOT", tempprint(root->temp)));
            }
        }
        else if(root->name == "comparison"){
            if(root->children.size() == 1){
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "expr"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "xor_expr"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }

        }
        else if(root->name == "and_expr"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "shift_expr"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
            }
        }
        else if(root->name == "arith_expr"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
            }
        }
        else if(root->name == "term"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[0]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[0]->temp), "", tempprint(root->temp)));
            }
            else{
                root->temp = new temp_var(root->children[0]->temp->type);
                //TODO: typechecking
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
            }
        }
        else if(root->name == "factor"){
            if(root->children.size() == 2){
                if(root->children[1]->temp == NULL || root->children[1]->temp->type != "uint"){
                    cerr << "TypeError: Unary operation unsupported on this type\n";
                    exit(0);
                }
                root->temp = new temp_var(root->children[1]->temp->type);
                root->code.push_back(quad("", tempprint(root->children[1]->temp), root->children[0]->name, tempprint(root->temp)));
            }
            else{
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = new temp_var(root->children[1]->temp->type);
                root->code.push_back(quad(tempprint(root->children[0]->temp), "", "", tempprint(root->temp)));
            }
        }
        else if(root->name == "power"){
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
                }
            }
        }
        else if(root->name == "atom_expr"){
            if(root->children.size() == 1){
                if(root->children[0]->data_type == "name_type"){
                    root->data_type = "atom_expr_name";
                    root->info = new atom_expr_name();
                    atom_expr_name * info = (atom_expr_name *) root->info;
                    info->name = ((name_type *)root->children[0]->info)->name_val;
                    root->temp = new temp_var("name");
                    root->code.push_back(quad(info->name, "", "", tempprint(root->temp)));
                }
                else if(root->children[0]->data_type == "num_type"){
                    root->data_type = "atom_expr_number";
                    root->info = new atom_expr_number();
                    atom_expr_number * info = (atom_expr_number *) root->info;
                    info->num = ((num_type *) root->children[0]->info)->number;
                    if(((num_type *) root->children[0]->info)->is_uint)
                        root->temp = new temp_var("uint");
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
            }
            else if(root->children.size() == 2){
                if(root->children[1]->data_type == "funccall"){
                    if(root->children[0]->data_type == "name_type"){
                        root->data_type = "funccall";
                        root->info = root->children[1]->info;
                        funccall * info = (funccall *) root->info;
                        info->funcname = ((name_type *) root->children[0]->info)->name_val;
                        if(!present_table->find_fun_entry(info->funcname)){
                            cerr << "Function " + info->funcname << " not defined\n";
                            exit(0);
                        }
                        root->temp = new temp_var(present_table->find_fun_entry(info->funcname)->returntype);
                        root->code.push_back(quad(info->funcname, "", "callfunc", tempprint(root->temp)));
                    }
                    else{
                        cerr << "Error: Invalid function call, not a proper name";
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
            if(root->children.size() == 3){
                root->data_type = "sqbrackettestlist_type";
                root->info = new sqbrackettestlist_type();
                sqbrackettestlist_type * info = (sqbrackettestlist_type *) root->info;
                info->sqbrackettestlist_vars = ((testlist_type *) root->children[1]->info)->testlist_vars;
            }
            else if(root->children.size() == 2){
                root->data_type = "sqbrackettestlist_type";
                root->info = new sqbrackettestlist_type();
                sqbrackettestlist_type * info = (sqbrackettestlist_type *) root->info;
            }
            else{
                root->info = root->children[0]->info;
                root->data_type = root->children[0]->data_type;
            }
        }
        else if(root->name == "testlist"){
            root->data_type = "testlist_type";
            root->info = new testlist_type();
            testlist_type * info = ((testlist_type *) root->info);
            if(root->children.size() == 3){
                info->testlist_vars = ((testlist_type *) root->children[0]->info)->testlist_vars;
            }
            info->testlist_vars.push_back(((test_type *) root->children.back()->info)->temp);
        }
        else if(root->name == "trailer"){
            if(root->children[0]->name == "("){ 
                root->data_type = "funccall";
                root->info = new funccall();
                funccall * info = (funccall *) root->info;
                if(root->children[1] != NULL){
                    info->arglist = ((arglist_type*) root->children[1]->info)->args;
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

        }
        else if(root->name == "exprlist"){

        }
        else if(root->name == "classdef"){

        }
        else if(root->name == "cond_parentheses_arglist"){

        }
        else if(root->name == "arglist"){
            root->data_type = "arglist_type";
            root->info = new arglist_type();
            arglist_type * info = new arglist_type();
            if(root->children.size() == 3){
                info->args = ((arglist_type *) root->children[0])->args;
            }
            info->args.push_back((arg_type*)root->children.back());
        }
        else if(root->name == "argument"){
            root->data_type = "arg_type";
            root->info = new arg_type();
            arg_type* info = (arg_type *) root->info;
            info->temp = root->children[0]->temp;
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