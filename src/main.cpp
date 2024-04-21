#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "node.hpp"

symbol_table * present_table;
vector<string> headers;
int string_id = 0;

string trim_string(string s)
{
    if (s.length() >= 2) {
        if ((s[0] == '"' && s[s.length() - 1] == '"') || (s[0] == '\'' && s[s.length() - 1] == '\'')) {
            s = s.substr(1, s.length() - 2);
        }
    }
    if (s.length() >= 6) {
        if ((s.substr(0, 3) == "'''" && s.substr(s.length() - 3, 3) == "'''") || (s.substr(0, 3) == "\"\"\"" && s.substr(s.length() - 3, 3) == "\"\"\"")) {
            s = s.substr(3, s.length() - 6);
        }
    }
    s = "\"" + s + "\"";
    return s;
}

string tempprint(temp_var * temp){
    temp->tempid = "$"s + to_string(temp->id);
    return "$"s + to_string(temp->id);
}

// int get_size(string type)
// {
//     if(type == "int" || type == "float" || type == "str"){
//         return 8;
//     }
//     else if(type.substr(0, 4) == "list"){

//     }
// }

int for_id = 0, while_id = 0, if_id = 0, elif_id = 0;
stack<pair<string, int>> loop_stack;
stack<int> if_stack;

void make_3ac(node * root)
{
    
    if(root->type == "nt"){
        // for(auto r: root->children){
        //     if(r){
        //         make_3ac(r);
        //         root->code.insert(root->code.end(), r->code.begin(), r->code.end());
        //     }
        // }
        vector<quad> beg_code, end_code;
        if(root->name == "file_input"){ // checked
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
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
            for(int i = 0; i < 6; i++){
                if(root->children[i]){
                    make_3ac(root->children[i]);
                    root->code.insert(root->code.end(), root->children[i]->code.begin(), root->children[i]->code.end());
                }
            }
            root->info = new funcdef();
            funcdef * info = (funcdef *) root->info;
            info->name = root->children[1]->name;
            info->args = ((funcarglist *) root->children[2]->info);
            info->returntype = ((atom_expr_name *) root->children[4]->info)->name;
            string printName = info->name;
            if(present_table->type == CLASS_TABLE){
                printName = present_table->name + "." + printName;
            }
            beg_code.push_back(quad("beginfunc "s + printName, "", "label", ""));
            symbol_table * fun_table = new symbol_table(FUNCTION_TABLE, present_table, info->name);
            beg_code.back().a1 = fun_table;
            beg_code.back().typea1 = FXN;
            // beg_code.back().typea1 = VAR; todo3
            //PUSHPARAMS
       
            fun_table->lineno = (root->children[1]->lineno);
            if(present_table->type == CLASS_TABLE){
                fun_table->func_classname = present_table->name;
            }
            present_table->add_entry_fun(fun_table);
            present_table = fun_table;
            fun_table->args = info->args->args;
            present_table->stackofst = 8;
            for(auto x: info->args->args){
                auto en = new symbol_table_entry(x->name, x->type, present_table);
                present_table->add_entry_var(en, false);
                present_table->stackofst += 8;
                en->stackofst = present_table->stackofst;
                // cout<<x->name<<" "<<en->stackofst<<"  zz\n";
                en->lineno = x->lineno;
                beg_code.push_back(quad("", "", "popparam", x->name));
                beg_code.back().typeres = ARG;
                beg_code.back().res = en;
            }
            make_3ac(root->children[6]);
            root->code.insert(root->code.end(), root->children[6]->code.begin(), root->children[6]->code.end());
            present_table = present_table->parent;
            end_code.push_back(quad("endfunc"s + printName, "", "label", ""));
            // end_code.back().typea1 = VAR; todo3
            // cerr << fun_table->offset << " yoyoyo\n";
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
                info->args = ((funcarglist *) root->children[1]->info)->args;
            }
            //TODO this and funcdef
        }
        else if(root->name == "typedarglist"){ // TODO: error handling
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarglist();
            funcarglist * info = (funcarglist *) root->info;
            if(root->children[0]->name == "tfpdef"){
                root->lineno = root->children[0]->lineno;
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
            }
        }
        else if(root->name == "tfpdef"){ // TODO: error handling
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->info = new funcarg();
            funcarg * info = (funcarg *) root->info;
            info->name = root->children[0]->name;
            info->lineno = root->children[0]->lineno;
            if(root->children[2]->data_type == "atom_expr_name"){
                info->type = ((atom_expr_name *) root->children[2]->info)->name;
            }
            else if(root->children[2]->data_type == "list_name_type"){
                info->type = "list"s + "[" + ((list_name_type *) root->children[2]->info)->type + "]";
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
                    if(root->children[0]->data_type == "atom_expr_name"){
                        //TODO: checking in current level
                        if(root->children[1]->data_type == "list_name_type"){   //TODO3
                            list_name_type * listinfo = ((list_name_type *) root->children[1]->info);
                            string type = listinfo->type;
                            int size = 0;
                            if(type == "str" || type == "int" || type == "float"){
                                size = 8;
                            }
                            else{
                                auto cls = present_table->find_class_entry(type);
                                if(cls == NULL){
                                    cerr << "Invalid type for list\n";
                                    exit(0);
                                }
                                size = cls->offset;
                            }
                            int elsize = size;
                            int num_elements = listinfo->vals->sqbrackettestlist_vars.size();
                            size = (elsize) * num_elements + 8;
                            symbol_table_entry * newentry = new symbol_table_entry(((atom_expr_name *) root->children[0]->info)->name, "list["s + type + "]", present_table);
                            present_table->add_entry_var(newentry);        
                            root->code.push_back(quad("", "", "param", to_string(size)));
                            root->code.back().typeres = NUM;
                            root->code.push_back(quad("allocmem 1", "", "callfunc", ""));
                            root->code.push_back(quad("", "", "popreturn", ((atom_expr_name *) root->children[0]->info)->name));
                            root->code.back().typeres = VAR;
                            root->code.back().res = newentry;
                            present_table->offset += 8; //DANGER
                            if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                present_table->parent->size += 8;
                            }
                            newentry->offset = present_table->offset;
                            newentry->lineno = root->children[1]->lineno;
                            newentry->size = elsize;
                            newentry->numel = num_elements;
                            root->code.push_back(quad(to_string(num_elements), "", "", "*"s + "(" + ((atom_expr_name *) root->children[0]->info)->name + ")"));
                            root->code.back().typea1 = NUM;
                            root->code.back().typeres = ARR_ACCESS;
                            root->code.back().res = new arr_access();
                            ((arr_access*)(root->code.back().res))->en = newentry;
                            ((arr_access*)(root->code.back().res))->tempidx = 0;
                            ((arr_access*)(root->code.back().res))->offset = 0;
                            ((arr_access*)(root->code.back().res))->name = ((atom_expr_name *) root->children[0]->info)->name;

                            // root->code.back().typea2 = VAR; todo3
                            for(int i = 0; i < num_elements; i++){
                                root->code.push_back(quad(tempprint(listinfo->vals->sqbrackettestlist_vars[i]), "", "", "*"s + "(" + ((atom_expr_name *) root->children[0]->info)->name + " + " + to_string(8 + i * elsize) + ")"));
                                root->code.back().a1 = (temp_var*)(listinfo->vals->sqbrackettestlist_vars[i]);
                                root->code.back().typea1 = TEMP_VAR;
                                root->code.back().typeres = ARR_ACCESS;
                                root->code.back().res = new arr_access();
                                ((arr_access*)(root->code.back().res))->en = newentry;
                                ((arr_access*)(root->code.back().res))->tempidx = 0;
                                ((arr_access*)(root->code.back().res))->offset = i * elsize + 8;
                                ((arr_access*)(root->code.back().res))->name = ((atom_expr_name *) root->children[0]->info)->name;
                                // root->code.back().typeres = VAR; todo3
                            }
                        }
                        else{
                            root->info = root->children[1]->info;
                            annasign * info = ((annasign *) root->info);
                            info->name = ((atom_expr_name*) root->children[0]->info)->name;
                            cerr << "enter here " << info->name << '\n';
                            symbol_table_entry * newentry = new symbol_table_entry(((atom_expr_name*) root->children[0]->info)->name, ((annasign*) root->children[1]->info)->type, present_table);
                            present_table->add_entry_var(newentry);
                            present_table->offset += 8;
                            if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                present_table->parent->size += 8;
                            }
                            newentry->offset = present_table->offset;
                            newentry->lineno = root->children[1]->lineno;
                            if(((annasign*) root->children[1]->info)->inval != NULL){
                                cerr << "type of inval " << ((annasign*) root->children[1]->info)->inval->type << '\n';
                                root->code.push_back(quad(tempprint(((annasign*) root->children[1]->info)->inval), "", "", ((atom_expr_name*) root->children[0]->info)->name));
                                root->code.back().a1 = (temp_var*)(((annasign*) root->children[1]->info)->inval);
                                root->code.back().typea1 = TEMP_VAR;
                                root->code.back().res = newentry;
                                root->code.back().typeres = VAR;
                                // cerr<<"yoo "<<((temp_var*)(root->code.back().a1))->tempid<<" "<<((temp_var*)(root->code.back().a1))->offset<<" "<<root->code.back().result<<"\n";
                                // cerr<<newentry->name<<" "<<newentry->offset<<" here1\n";
                            }
                        }
                    }
                    else if(root->children[0]->data_type == "obj_access"){
                        root->info = root->children[1]->info;
                        if(((obj_access *)root->children[0]->info)->obj != "self"){
                            cerr << "Declarations only allowed with self object\n";
                            exit(0);
                        }
                        if(present_table->parent == NULL or present_table->parent->type != CLASS_TABLE){
                            cerr << present_table->parent->name << " : Declarations only allowed in __init__ function inside class\n";
                            exit(0);
                        }
                        // if(present_table->type != FUNCTION_TABLE || present_table->name != present_table->parent->name + ".__init__"){
                        //     exit(0);
                        // }
                        annasign * info = ((annasign *) root->info);
                        info->name = ((obj_access *) root->children[0]->info)->attr_name;
                        symbol_table_entry * newentry = new symbol_table_entry(((obj_access *) root->children[0]->info)->attr_name, ((annasign *) root->children[1]->info)->type, present_table);
                        present_table->add_entry_var(newentry); 
                        present_table->parent->add_entry_var(newentry);
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        // cerr << "here " << info->name <<" "<<present_table->offset<<" "<<present_table->size<<"\n";
                        newentry->offset = present_table->offset;
                        newentry->lineno = root->children[1]->lineno;

                        if(((annasign*) root->children[1]->info)->inval != NULL){
                            root->code.push_back(quad(tempprint(((annasign*) root->children[1]->info)->inval), "", "", "*yo1"s + "(" + ((obj_access *) root->children[0]->info)->obj + " + " + to_string(newentry->offset) + ")"));
                            root->code.back().a1 = (temp_var*)(((annasign*) root->children[1]->info)->inval);
                            root->code.back().typea1 = TEMP_VAR;
                            root->code.back().typeres = OBJ_ACCESS;

                            auto entry = present_table->find_var_entry(((obj_access *) root->children[0]->info)->obj);
                            ((obj_access*)(root->children[0]->info))->en = entry;
                            ((obj_access*)(root->children[0]->info))->tempidx = 0;
                            ((obj_access*)(root->children[0]->info))->offset = newentry->offset;
                            root->code.back().res = root->children[0]->info;
                            if(present_table->type==FUNCTION_TABLE || present_table->parent->type==CLASS_TABLE){
                                cout<<"yess "<<entry->stackofst<<" "<<newentry->name<<"\n";                                
                            }
                            // root->code.back().typeres = VAR; todo3
                        }
                    }
                }
                else if(root->children[1]->name == "="){
                
                    if(root->children[0]->data_type == "atom_expr_name"){
                        string name = ((atom_expr_name *) root->children[0]->info)->name;
                        if(present_table->find_var_entry(name) == NULL){
                            cerr << "variable not declared for assignment\n";
                            exit(0);
                        }
                        else{
                            root->code.push_back(quad(tempprint(root->children[2]->temp), "", "", name));
                            root->code.back().a1 = (temp_var*)(root->children[2]->temp);
                            root->code.back().typea1 = TEMP_VAR;
                            root->code.back().res = present_table->find_var_entry(name);
                            root->code.back().typeres = VAR;
                        }
                    }
                    else if(root->children[0]->data_type == "arr_access"){// fill
                        string name = ((arr_access *)root->children[0]->info)->name;
                        if(present_table->find_var_entry(name) == NULL){
                            cerr << "Array not defined\n";
                            exit(0);
                        }
                        else{
                            auto info = ((arr_access *) root->children[0]->info);
                            root->code.push_back(quad(tempprint(root->children[2]->temp), "", "", "*("s + info->name + " + " + tempprint(info->accessind) + ")"));
                            root->code.back().a1 = (temp_var*)(root->children[2]->temp);
                            // cerr << "yo\n";
                            root->code.back().typea1 = TEMP_VAR;
                            // cerr << info->offset <<"\n";
                            root->code.back().res = info;
                            root->code.back().typeres = ARR_ACCESS;
                            ((arr_access*)(root->code.back().res))->en = present_table->find_var_entry(info->name);
                        }
                    }
                    else if(root->children[0]->data_type == "obj_access"){
                        root->data_type = root->children[0]->data_type;
                        root->info = root->children[0]->info;
                        obj_access * info = (obj_access *) root->info;
                        if(present_table->find_var_entry(info->obj)){
                            if(info->obj == "self"){
                                if(present_table->parent == NULL or present_table->parent->type != CLASS_TABLE){
                                    cerr << "self not defined in class\n";
                                    exit(0);
                                }
                                if(present_table->parent->find_var_entry(info->attr_name) == NULL){
                                    cerr << "Attribute not defined in class\n";
                                    exit(0);
                                }
                                root->code.push_back(quad(tempprint(root->children[2]->temp), "", "", "yo1*"s + "(" + info->obj + " + " + to_string(present_table->parent->find_var_entry(info->attr_name)->offset) + ")"));
                                root->code.back().a1 = (temp_var*)(root->children[2]->temp);
                                root->code.back().typea1 = TEMP_VAR;
                                root->code.back().typeres = OBJ_ACCESS;
                                auto obj = new obj_access();
                                obj->tempidx = 0;
                                obj->en = present_table->find_var_entry(info->obj);
                                obj->offset = present_table->parent->find_var_entry(info->attr_name)->offset;
                                root->code.back().res = obj;
                            }
                            else{
                                auto obj = present_table->find_var_entry(info->obj);
                                if(obj == NULL){
                                    cerr << "Object not defined\n";
                                    exit(0);
                                }
                                auto cls = present_table->find_class_entry(obj->type);
                                if(cls != NULL){
                                    auto attr = cls->find_var_entry(info->attr_name);
                                    if(attr == NULL){
                                        cerr << "Attribute not defined in class\n";
                                        exit(0);
                                    }
                                    root->code.push_back(quad(tempprint(root->children[2]->temp), "", "", "yo2*"s + "(" + info->obj + " + " + to_string(attr->offset) + ")"));
                                    root->code.back().a1 = (temp_var*)(root->children[2]->temp);
                                    root->code.back().typea1 = TEMP_VAR;
                                    auto objj = new obj_access();
                                    objj->tempidx = 0;
                                    objj->en = obj;
                                    objj->offset = attr->offset;
                                    root->code.back().typeres = OBJ_ACCESS;
                                    root->code.back().res = objj;
                                    // root->code.back().typeres = VAR; todo3
                                }
                                else{
                                    cerr<<"Undefined class\n";
                                    exit(0);
                                }
                            }
                        }
                        else{
                            cerr << "Object not defined\n";
                            exit(0);
                        }
                    }
                    else{
                        cerr << "Invalid assignment\n";
                        exit(0);
                    }
                }
                else{
                    if(root->children[0]->data_type == "atom_expr_name"){
                        string name = ((atom_expr_name *) root->children[0]->info)->name;
                        if(present_table->find_var_entry(name) == NULL){
                            cerr << "variable not declared for assignment\n";
                            exit(0);
                        }
                        else{
                            // UDHAV
                            root->code.push_back(quad(name, tempprint(root->children[2]->temp), (string(root->children[1]->name.begin(), root->children[1]->name.end() - 1)), name));
                            root->code.back().a2 = (temp_var*)(root->children[2]->temp);
                            root->code.back().typea2 = TEMP_VAR;
                            root->code.back().a1 = present_table->find_var_entry(name);
                            root->code.back().typea1 = VAR;
                            root->code.back().res = present_table->find_var_entry(name);
                            root->code.back().typeres = VAR;
                            
                        }
                    }
                    else if(root->children[0]->data_type == "arr_access"){
                        string name = ((arr_access *)root->children[0]->info)->name;
                        if(present_table->find_var_entry(name) == NULL){
                            cerr << "Array not defined\n";
                            exit(0);
                        }
                        else{
                            auto info = ((arr_access *) root->children[0]->info);
                            root->code.push_back(quad("*("s + info->name + " + " + tempprint(info->accessind) + ")", tempprint(root->children[2]->temp), (string(root->children[1]->name.begin(), root->children[1]->name.end() - 1)), "*("s + info->name + " + " + tempprint(info->accessind) + ")"));
                            // cerr<<"lol what?\n";
                            root->code.back().a2 = (temp_var*)(root->children[2]->temp);
                            root->code.back().typea2 = TEMP_VAR;
                            // root->code.back().typeres = VAR; //todo3
                            
                        }
                    }
                    else if(root->children[0]->data_type == "obj_access"){
                        root->data_type = root->children[0]->data_type;
                        root->info = root->children[0]->info;
                        obj_access * info = (obj_access *) root->info;
                        if(present_table->find_var_entry(info->obj)){
                            if(info->obj == "self"){
                                if(present_table->parent == NULL or present_table->parent->type != CLASS_TABLE){
                                    cerr << "self not defined in class\n";
                                    exit(0);
                                }
                                if(present_table->parent->find_var_entry(info->attr_name) == NULL){
                                    cerr << "Attribute not defined in class\n";
                                    exit(0);
                                }
                                root->code.push_back(quad("*yo2"s + "(" + info->obj + " + " + to_string(present_table->parent->find_var_entry(info->attr_name)->offset) + ")", tempprint(root->children[2]->temp), string(root->children[1]->name.begin(), root->children[1]->name.end() - 1), "*"s + "(" + info->obj + " + " + to_string(present_table->parent->find_var_entry(info->attr_name)->offset) + ")"));
                                root->code.back().a2 = (temp_var*)(root->children[2]->temp);
                                root->code.back().typea2 = TEMP_VAR;
                                auto obj = new obj_access();
                                obj->tempidx = 0;
                                obj->offset = present_table->parent->find_var_entry(info->attr_name)->offset;
                                obj->en = present_table->find_var_entry(info->obj);
                                root->code.back().a1 = obj;
                                root->code.back().typea1 = OBJ_ACCESS;
                                root->code.back().res = obj;
                                root->code.back().typeres = OBJ_ACCESS;
                            }
                            else{
                                auto obj = present_table->find_var_entry(info->obj);
                                if(obj == NULL){
                                    cerr << "Object not defined\n";
                                    exit(0);
                                }
                                auto cls = present_table->find_class_entry(obj->type);
                                if(cls != NULL){
                                    auto attr = cls->find_var_entry(info->attr_name);
                                    if(attr == NULL){
                                        cerr << "Attribute not defined in class\n";
                                        exit(0);
                                    }
                                    root->code.push_back(quad("*yo3"s + "(" + info->obj + " + " + to_string(attr->offset) + ")", tempprint(root->children[2]->temp), string(root->children[1]->name.begin(), root->children[1]->name.end() - 1), "*"s + "(" + info->obj + " + " + to_string(attr->offset) + ")"));
                                    root->code.back().a2 = (temp_var*)(root->children[2]->temp);
                                    root->code.back().typea2 = TEMP_VAR;
                                    auto objj = new obj_access();
                                    objj->tempidx = 0;
                                    objj->en = obj;
                                    objj->offset = attr->offset;
                                    root->code.back().typea1 = OBJ_ACCESS;
                                    root->code.back().a1 = objj;
                                    root->code.back().typeres = OBJ_ACCESS;
                                    root->code.back().res = objj;
                                    // root->code.back().typeres = VAR; todo3
                                    // root->code.back().typea1 = VAR; todo3
                                }
                                else{
                                    cerr << "Class entry not found\n";
                                    exit(0);
                                }
                            }
                        }
                        else{
                            cerr << "Object not defined\n";
                            exit(0);
                        }
                    }
                    else{
                        cerr << "Invalid assignment\n";
                        exit(0);
                    }
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
            if(root->children[1]->data_type == "list_name_type"){
                root->data_type = root->children[1]->data_type;
                root->info = root->children[1]->info;
                root->lineno = root->children[1]->lineno;
                if(root->children.size() == 4){
                    if(root->children[3]->data_type != "sqbrackettestlist_type"){
                        cerr << "Invalid list declaration\n";
                        exit(0);
                    }
                    ((list_name_type *) root->info)->vals = ((sqbrackettestlist_type *) root->children[3]->info);
                }
            }
            else{
                string type = ((atom_expr_name *) root->children[1]->info)->name;
                root->lineno = root->children[0]->lineno;
                root->offset = root->children[0]->offset;
                root->info = new annasign();
                annasign * info = (annasign *) root->info;
                info->type = type;
                if(root->children.size() == 4){
                    info->inval = root->children[3]->temp;
                }
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
                // root->code.back().typeres = LABEL; todo3
            }
            else if(loop_stack.top().first == "while"){
                root->code.push_back(quad("", "", "goto", "endwhile"s + to_string(loop_stack.top().second)));
                // root->code.back().typeres = LABEL; todo3
            }
        }
        else if(root->name == "continue_stmt"){
            if(loop_stack.empty()){
                cerr<<"Incorrect placement of continue\n";
                exit(0);
            }
            if(loop_stack.top().first == "for"){
                root->code.push_back(quad("", "", "goto", "beginfor"s + to_string(loop_stack.top().second)));
                // root->code.back().typeres = LABEL; todo3
            }
            else{
                root->code.push_back(quad("", "", "goto", "beginwhile"s + to_string(loop_stack.top().second)));
                // root->code.back().typeres = LABEL; todo3
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
                root->code.back().a2 = (temp_var*)(root->children[1]->temp);
                root->code.back().typea2 = TEMP_VAR;
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
            // beg_code.back().typea1 = VAR;  todo3
            beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
            beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endif"s + to_string(if_id)));
            beg_code.back().typea2 = TEMP_VAR;
            // beg_code.back().typea1 = VAR; todo3
            // beg_code.back().typeres = VAR; todo3
            beg_code.back().a2 = (temp_var*)(root->children[1]->temp);
            root->code.push_back(quad("", "", "goto", "endifblock"s + to_string(if_id)));
            // root->code.back().typeres = LABEL; todo3
            root->code.push_back(quad("endif"s + to_string(if_id), "", "label", ""));
            // root->code.back().typea1 = VAR; todo3
            for(int i = 4; i < root->children.size(); i++){
                if(root->children[i]){
                    make_3ac(root->children[i]);
                    root->code.insert(root->code.end(), root->children[i]->code.begin(), root->children[i]->code.end());
                }
            }
            end_code.push_back(quad("endifblock"s + to_string(if_id), "", "label", ""));
            // end_code.back().typea1 = VAR; todo3
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
            root->code.back().a2 = (temp_var*)(root->children.end()[-3]->temp);
            root->code.back().typea2 = TEMP_VAR;
            // root->code.back().typeres = VAR; todo3
            // root->code.back().typea1 = VAR; todo3
            root->code.insert(root->code.end(), root->children.back()->code.begin(), root->children.back()->code.end());
            root->code.push_back(quad("", "", "goto", "endifblock"s + to_string(if_stack.top())));
            // root->code.back().typeres = VAR; todo3
            root->code.push_back(quad("endelif"s + to_string(elif_id), "", "label", ""));
            // root->code.back().typea1 = VAR; todo3
        }
        else if(root->name == "while_stmt"){
            while_id++;
            loop_stack.push({"while", while_id});
            int twhile_id = while_id;
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                }
            }
            root->code = root->children[3]->code;
            beg_code.push_back(quad("beginwhile"s + to_string(twhile_id), "", "label", ""));
            // beg_code.back().typea1 = VAR; todo3
            beg_code.insert(beg_code.end(), root->children[1]->code.begin(), root->children[1]->code.end());
            beg_code.push_back(quad("if_false", tempprint(root->children[1]->temp), "goto", "endwhile"s + to_string(twhile_id)));
            beg_code.back().a2 = (temp_var*)(root->children[1]->temp);
            beg_code.back().typea2 = TEMP_VAR;
            // beg_code.back().typeres = VAR; todo3
            // beg_code.back().typea1 = VAR; todo3
            end_code.push_back(quad("", "", "goto", "beginwhile"s + to_string(twhile_id)));
            // end_code.back().typeres = VAR; todo3
            end_code.push_back(quad("endwhile"s + to_string(twhile_id), "", "label", ""));
            // end_code.back().typea1 = VAR; todo3   
            loop_stack.pop();
        }
        else if(root->name == "for_stmt"){
            for_id++;
            int tfor_id = for_id;
            loop_stack.push({"for", for_id});
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                }
            }
            root->code = root->children[5]->code;
            if(root->children[3]->data_type == "funccall"){
                funccall * info = (funccall *)root->children[3]->info;
                if(info->funcname != "range"){
                    cerr << "For loop: only range(n) type functions allowed\n";
                    exit(0);
                }
                else if(info->arglist.size() != 1 and info->arglist.size() != 2){
                    cerr << "For loop: only range(n) / range(a, b) type args allowed\n";
                    exit(0);
                }
                temp_var * upbound = info->arglist.back()->temp;
                temp_var * itervar = new temp_var("int");
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                itervar->offset = present_table->offset;
                // beg_code.back().typea1 = VAR; todo3
                beg_code.insert(beg_code.end(), root->children[3]->code.begin(), root->children[3]->code.end());

                if(info->arglist.size() == 2){
                    beg_code.push_back(quad(tempprint(info->arglist[0]->temp), "", "", tempprint(itervar)));
                    beg_code.back().a1 = (temp_var*)(info->arglist[0]->temp); //*
                    beg_code.back().res = (temp_var*)(itervar); //*
                    beg_code.back().typea1 = TEMP_VAR;
                    beg_code.back().typeres = TEMP_VAR;
                }
                else{
                    beg_code.push_back(quad("0", "", "", tempprint(itervar)));
                    beg_code.back().res = (temp_var*)(itervar); //*
                    beg_code.back().typeres = TEMP_VAR;
                    beg_code.back().typea1 = NUM;
                    // beg_code.back().typea1 = VAR; todo3
                }
                beg_code.push_back(quad("beginfor"s + to_string(tfor_id), "", "label", ""));
                temp_var * comp_res = new temp_var("bool");
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                comp_res->offset = present_table->offset;
                tempprint(upbound);
                beg_code.push_back(quad(tempprint(itervar), tempprint(upbound), "<", tempprint(comp_res)));
                beg_code.back().a1 = (temp_var*)(itervar); //*
                beg_code.back().a2 = (temp_var*)(upbound); //*
                beg_code.back().res = (temp_var*)(comp_res); //*
                beg_code.back().typea1 = TEMP_VAR;
                beg_code.back().typea2 = TEMP_VAR;
                beg_code.back().typeres = TEMP_VAR;
                beg_code.push_back(quad("if_false", tempprint(comp_res), "goto", "endfor"s + to_string(tfor_id)));
                beg_code.back().a2 = (temp_var*)(comp_res); //*
                beg_code.back().typea2 = TEMP_VAR;
                // beg_code.back().typeres = VAR; todo3
                // beg_code.back().typea1 = VAR; todo3
                beg_code.push_back(quad(tempprint(itervar), "", "", root->children[1]->name));
                beg_code.back().a1 = (temp_var*)(itervar); //*
                beg_code.back().typea1 = TEMP_VAR;
                beg_code.back().res = present_table->find_var_entry(root->children[1]->name); //*
                beg_code.back().typeres = VAR;
                // beg_code.back().typeres = VAR; todo3
                end_code.push_back(quad(tempprint(itervar), "1", "+", tempprint(itervar)));
                end_code.back().a1 = (temp_var*)(itervar); //*
                end_code.back().typea2 = NUM; 
                end_code.back().res = (temp_var*)(itervar); //*
                // TODO
                end_code.back().typea1 = TEMP_VAR;
                end_code.back().typeres = TEMP_VAR;
                // end_code.back().typea2 = VAR; todo3
                end_code.push_back(quad("", "", "goto", "beginfor"s + to_string(for_id)));
                // end_code.back().typeres = VAR; todo3
                end_code.push_back(quad("endfor"s + to_string(tfor_id), "", "label", ""));
                // end_code.back().typea1 = VAR; todo3
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));  
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));  
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //* 
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad("", tempprint(root->children[1]->temp), "NOT", tempprint(root->temp)));
                root->code.back().a2 = (temp_var*)(root->children[1]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typeres = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                // cerr<<"yo "<<root->children[1]->name<<"\n";
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset; 
                // cerr<<root->children[0]->name<<"\n";
                // cerr<<root->children[1]->name<<"\n";
                // cerr<<root->children[2]->name<<"\n";
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp))); 
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*  
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));   
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
                // cerr<<"yoyo77 "<<root->code.back().op<<"\n";
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
                root->temp = new temp_var(root->children[0]->temp->type);
                present_table->offset += 8;
                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                    present_table->parent->size += 8;
                }
                root->temp->offset = present_table->offset;
                //TODO: typechecking
                root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
                root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                root->code.back().res = (temp_var*)(root->temp); //*
                root->code.back().typea1 = TEMP_VAR;
                root->code.back().typea2 = TEMP_VAR;
                root->code.back().typeres = TEMP_VAR;
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
                // if(root->children[1]->temp == NULL || root->children[1]->temp->type != "int" || root->children[1]->temp->type != "float"){
                //     exit(0);
                // }
                // else{
                    root->temp = new temp_var("int");
                    present_table->offset += 8;
                    if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                        present_table->parent->size += 8;
                    }
                    root->temp->offset = present_table->offset;
                    root->code.push_back(quad("", tempprint(root->children[1]->temp), root->children[0]->name, tempprint(root->temp)));
                    root->code.back().a2 = (temp_var*)(root->children[1]->temp); //*
                    root->code.back().res = (temp_var*)(root->temp); //*
                    root->code.back().typea2 = TEMP_VAR;
                    root->code.back().typeres = TEMP_VAR;
                // }
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
                // cerr<<"here 2\n";
                // cerr<<root->children[0]->data_type <<" debug1"<<"\n";
            }
            else if(root->children.size() == 3){
                if(root->children[2]->temp != NULL and root->children[2]->temp->type == "int"){
                    //TODO - implement power;
                    root->temp = new temp_var("int");
                    present_table->offset += 8;
                    if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                        present_table->parent->size += 8;
                    }
                    root->temp->offset = present_table->offset;
                    root->code.push_back(quad(tempprint(root->children[0]->temp), tempprint(root->children[2]->temp), root->children[1]->name, tempprint(root->temp)));
                    root->code.back().a1 = (temp_var*)(root->children[0]->temp); //*
                    root->code.back().a2 = (temp_var*)(root->children[2]->temp); //*
                    root->code.back().res = (temp_var*)(root->temp); //*
                    root->code.back().typea1 = TEMP_VAR;
                    root->code.back().typea2 = TEMP_VAR;
                    root->code.back().typeres = TEMP_VAR;

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
                    info->lineno = ((name_type *)root->children[0]->info)->lineno;
                    root->temp = root->children[0]->temp;
                    if(present_table->find_var_entry(info->name)){
                        root->temp = new temp_var("name");
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        root->temp->offset = present_table->offset;
                        root->temp->tempid = tempprint(root->temp);
                        // cerr << root->temp->tempid << " h1\n"; 
                        root->code.push_back(quad(info->name, "", "", root->temp->tempid));
                        root->code.back().res = (temp_var*)(root->temp); //*
                        root->code.back().typeres = TEMP_VAR;
                        root->code.back().a1 = present_table->find_var_entry(info->name);
                        root->code.back().typea1 = VAR;
                        // cerr<<root->temp->tempid<<" "<<root->temp->offset<<" "<<info->offset<<" here2\n";
                    }
                }
                else if(root->children[0]->data_type == "num_type"){
                    root->data_type = "atom_expr_number";
                    root->info = new atom_expr_number();
                    atom_expr_number * info = (atom_expr_number *) root->info;
                    info->num = ((num_type *) root->children[0]->info)->number;
                    // cout<<"here\n";
                    if(((num_type *) root->children[0]->info)->is_int){
                        root->temp = new temp_var("int");
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        root->temp->offset = present_table->offset;
                        root->temp->tempid = tempprint(root->temp);
                        // cerr << root->temp->tempid << " h2\n"; 
                        // cerr << root->temp->type<<"\n";
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        root->temp->offset = present_table->offset;
                        // cerr<<root->temp->tempid<<" "<<root->temp->offset<<" here3\n";
                    }
                    else{
                        root->temp = new temp_var("number");
                        root->temp->tempid = tempprint(root->temp);
                        // cerr << root->temp->tempid << " h3\n"; 
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        root->temp->offset = present_table->offset;
                        // cerr<<root->temp->tempid<<" "<<root->temp->offset<<" here4\n";
                    }
                    root->code.push_back(quad(info->num, "", "", root->temp->tempid));
                    root->code.back().res = (temp_var*)root->temp;
                    root->code.back().typea1 = NUM;
                    root->code.back().typeres = TEMP_VAR;
                }
                else if(root->children[0]->data_type == "keyword_type"){
                    root->data_type = "atom_expr_keyword";
                    root->info = new atom_expr_keyword();
                    atom_expr_keyword * info = (atom_expr_keyword *) root->info;
                    info->keyword = ((keyword_type *) root->children[0]->info)->keyword;
                }
                else if(root->children[0]->data_type == "sqbrackettestlist_type"){
                    root->data_type = root->children[0]->data_type;
                    root->info = root->children[0]->info;
                    // root->data_type = "atom_expr_list";
                    // root->info = new atom_expr_list();
                    // atom_expr_list * info = (atom_expr_list *) root->info;
                    // info->tstlist = ((sqbrackettestlist_type *)(root->children[0]))->sqbrackettestlist_vars;
                }
                else if(root->children[0]->data_type == "brack_test_type"){
                    root->temp = root->children[0]->temp;
                }
                else if(root->children[0]->data_type == "str_type"){
                    root->data_type = "atom_expr_string";
                    string_id++;
                    headers.push_back(".string" + to_string(string_id) + ": " + trim_string(((str_type *) root->children[0]->info)->str));
                    root->temp = new temp_var("str");
                    present_table->offset += 8;
                    if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                        present_table->parent->size += 8;
                    }
                    root->temp->offset = present_table->offset;
                    root->code.push_back(quad("$string" + to_string(string_id), ((str_type *) root->children[0]->info)->str, "", tempprint(root->temp))); 
                    root->code.back().res = (temp_var*)(root->temp); //*
                    root->code.back().typea1 = STR;
                    root->code.back().typeres = TEMP_VAR;
                }
            }
            else if(root->children.size() == 2){
                if(root->children[1]->data_type == "funccall"){
                    if(root->children[0]->data_type == "name_type"){
                        root->data_type = "funccall";
                        root->info = root->children[1]->info;
                        funccall * info = (funccall *) root->info;
                        // info->arglist = ((arglist_type *) root->children[1]->info)->args;
                        info->funcname = ((name_type *) root->children[0]->info)->name_val;
                        if(!present_table->find_fun_entry(info->funcname)){
                            if(info->funcname != "len" and info->funcname != "range" and info->funcname != "print"){
                                if(!present_table->find_class_entry(info->funcname)){
                                    cerr << "Function or class " + info->funcname << " not defined\n";
                                    exit(0);
                                }
                                else{
                                    auto cls = present_table->find_class_entry(info->funcname);
                                    root->temp = new temp_var("pointer");
                                    present_table->offset += 8;
                                    root->temp->offset = present_table->offset;
                                    int sz = cls->size;
                                    cerr<<"sz = "<<sz<<"\n";

                                    root->code.push_back(quad("", "", "param", to_string(sz)));
                                    root->code.back().typeres = NUM;
                                    root->code.push_back(quad("allocmem", "1", "callfunc", ""));
                                    root->code.push_back(quad("", "", "popreturn", tempprint(root->temp)));
                                    // cerr<<"hihi "<<root->temp->tempid<<"\n";
                                    root->code.back().res = (temp_var*)(root->temp); //*
                                    root->code.back().typeres = TEMP_VAR;
                                    for(auto it = info->arglist.rbegin(); it != info->arglist.rend(); it++){
                                        root->code.push_back(quad("", "", "param", tempprint((*it)->temp)));
                                        root->code.back().res = (temp_var*)(*it)->temp; //*
                                        root->code.back().typeres = TEMP_VAR_ARG;
                                    }
                                    root->code.push_back(quad("", "", "param", tempprint(root->temp)));
                                    root->code.back().res = (temp_var*)(root->temp); //*
                                    root->code.back().typeres = TEMP_VAR_ARG;
                                    root->code.push_back(quad(cls->name + ".__init__", to_string(info->arglist.size() + 1), "callfunc ", ""));
                                    root->code.back().typea1 = STR;
                                    root->code.back().typea2 = STR;
                                }
                            }
                            else if(info->funcname == "len"){
                                root->temp = new temp_var("int");
                                // present_table->offset += 8;
                                // root->temp->offset = present_table->offset;
                                auto args = ((funccall* )root->children[1]->info)->arglist;
                                if(args.size() != 1){
                                    cerr << "Error: len() takes exactly 1 argument\n";
                                    exit(0);
                                }
                                if(args[0]->name == ""){
                                    cerr << "Error: len() must take name of a list\n";
                                    exit(0);
                                }
                                auto def = present_table->find_var_entry(args[0]->name);
                                if(def == NULL){
                                    cerr << "Error: list " << args[0]->name << " not defined\n";
                                    exit(0);
                                }
                                if(def->type.substr(0, 4) != "list"){
                                    cerr << "Error: len() must take name of a list\n";
                                    exit(0);
                                }
                                int numel = def->numel;
                                root->code.push_back(quad("*(" + args[0]->name + ")", "", "", tempprint(root->temp)));
                                root->code.back().res = (temp_var*)(root->temp); //*
                                root->code.back().typeres = TEMP_VAR;
                                root->code.back().a1 = new arr_access();
                                auto en = present_table->find_var_entry(args[0]->name);
                                ((arr_access*)(root->code.back().a1))->en = en;
                                ((arr_access*)(root->code.back().a1))->name = args[0]->name;
                                ((arr_access*)(root->code.back().a1))->accessind = 0;
                                ((arr_access*)(root->code.back().a1))->tempidx = 0;
                                root->code.back().typea1 = ARR_ACCESS;
                                // root->code.back().typea1 = VAR; todo3
                            }
                            else if(info->funcname == "print"){
                                auto args = ((funccall* )root->children[1]->info)->arglist;
                                if(args.size() != 1){
                                    cerr << "Error: print() takes exactly 1 argument\n";
                                    exit(0);
                                }
                                root->code.push_back(quad("", "", "param", tempprint(args[0]->temp)));
                                root->code.back().res = (temp_var*)(args[0]->temp); //*
                                root->code.back().typeres = TEMP_VAR;
                                root->code.push_back(quad("print", "1", "callfunc", ""));
                                root->code.back().res = (temp_var*)(args[0]->temp); //*
                                root->code.back().typeres = TEMP_VAR;
                                // cerr<<root->children[0]->data_type<<" here6\n";
                            }
                        }
                        else{

                            root->temp = new temp_var(present_table->find_fun_entry(info->funcname)->returntype);
                            present_table->offset += 8;
                            if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                present_table->parent->size += 8;
                            }
                            root->temp->offset = present_table->offset;
                            auto func = present_table->find_fun_entry(info->funcname);
                            // func->args.size() == info->arglist.size(); TODO
                            for(auto it = info->arglist.rbegin(); it != info->arglist.rend(); it++){
                                root->code.push_back(quad("", "", "param", tempprint((*it)->temp)));
                                root->code.back().typeres = TEMP_VAR_ARG;
                                root->code.back().res = (*it)->temp;
                            }
                            string printName = info->funcname;
                            if(func->func_classname != ""){
                                printName = func->func_classname + "." + printName;
                            }
                            root->code.push_back(quad(printName, to_string(info->arglist.size()), "callfunc", ""));
                            root->code.back().typea1 = STR; 
                            root->code.back().typea2 = NUM;
                            root->code.push_back(quad("", "", "popreturn", tempprint(root->temp)));
                            root->code.back().res = (temp_var*)root->temp;
                            root->code.back().typeres = TEMP_VAR;
                        }
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
                        if(info->name == "list"){
                            root->data_type = "list_name_type";
                            root->info = new list_name_type();
                            ((list_name_type *) root->info)->type = info->access_name;
                            ((list_name_type *) root->info)->name = info->name;
                        }
                        else{
                            if(!present_table->find_var_entry(info->name)){
                                cerr << "Array " << info->name << " not defined\n";
                                exit(0);
                            }
                            temp_var * derefpos = new temp_var("int");
                            root->temp = derefpos;
                            present_table->offset += 8;
                            if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                present_table->parent->size += 8;
                            }
                            derefpos->offset = present_table->offset;
                            temp_var * offs = new temp_var("int");
                            present_table->offset += 8;
                            if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                present_table->parent->size += 8;
                            }
                            offs->offset = present_table->offset;
                            root->code.push_back(quad(to_string(present_table->find_var_entry(info->name)->size), tempprint(info->accessind), "*", tempprint(offs)));
                            root->code.back().a2 = (temp_var*)info->accessind;
                            root->code.back().res = (temp_var*)offs;
                            root->code.back().typea1 = NUM;
                            root->code.back().typea2 = TEMP_VAR;
                            root->code.back().typeres = TEMP_VAR;
                            // cerr << info->accessind->tempid << " h5\n"; 
                            // cerr << offs->tempid << " h55\n"; 
                            // root->code.back().typea1 = VAR; todo3
                            root->code.push_back(quad(tempprint(offs), "8", "+", tempprint(offs)));
                            root->code.back().a1 = (temp_var*)offs;
                            root->code.back().res = (temp_var*)offs;
                            root->code.back().typea2 = NUM;
                            root->code.back().typea1 = TEMP_VAR;
                            root->code.back().typeres = TEMP_VAR;
                            // cerr << offs->tempid << " h6\n"; 
                            root->code.push_back(quad("**("s + info->name + " + " + tempprint(offs) + ")", "", "", tempprint(derefpos)));
                            root->code.back().a1 = new arr_access();
                            auto x = root->code.back();
                            // cerr<<"yay - "<<x.result<<" - "<<x.arg1<<" - "<<x.op<<" - "<<x.arg2<<"\n";
                            ((arr_access*)(root->code.back().a1))->en = present_table->find_var_entry(info->name);
                            ((arr_access*)(root->code.back().a1))->name = info->name;
                            ((arr_access*)(root->code.back().a1))->accessind = offs;
                            root->code.back().res = (temp_var*)derefpos;
                            root->code.back().typeres = TEMP_VAR;
                            root->code.back().typea1 = ARR_ACCESS;
                            info->accessind = offs;
                            // cerr << derefpos->tempid << " h7\n"; 
                            // root->code.back().typea2 = TEMP_VAR; todo3
                            // DANGER
                            // root->code.push_back(quad("*"s + tempprint(derefpos), "", "", tempprint(root->temp)));
                            // root->code.back().res = (temp_var*)root->temp;
                            // root->code.back().a2 = (temp_var*)derefpos;
                            // root->code.back().typeres = DEREF;
                            // root->code.back().typea2 = TEMP_VAR; todo3
                        }
                    }
                    else{
                        cerr << "Error: Invalid Array\n";
                        exit(0);
                    }
                }
                else if(root->children[1]->data_type == "obj_access"){
                    if(root->children[0]->data_type == "name_type"){
                        root->data_type = root->children[1]->data_type;
                        root->info = root->children[1]->info;
                        obj_access * info = (obj_access *) root->info;
                        info->obj = ((name_type *) root->children[0]->info)->name_val;
                        if(present_table->find_var_entry(info->obj)){
                            if(info->obj == "self"){
                                root->temp = new temp_var(present_table->find_var_entry(info->obj)->type);
                                present_table->offset += 8;
                                if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                    present_table->parent->size += 8;
                                }
                                root->temp->offset = present_table->offset;
                                symbol_table_entry * obj_entry = present_table->find_var_entry(info->obj);
                                if(present_table->parent->find_var_entry(info->attr_name)){
                                    root->code.push_back(quad("*yo4"s + "(" + info->obj + " + " + to_string(present_table->parent->find_var_entry(info->attr_name)->offset) + ")", "", "", tempprint(root->temp)));
                                    root->code.back().res = (temp_var*)root->temp;
                                    root->code.back().typeres = TEMP_VAR;
                                    auto obj = new obj_access();
                                    auto en = present_table->find_var_entry(info->obj);
                                    obj->en = en;
                                    obj->tempidx = 0;
                                    obj->offset = present_table->parent->find_var_entry(info->attr_name)->offset;
                                    root->code.back().a1 = obj;
                                    root->code.back().typea1 = OBJ_ACCESS;
                                }
                            }
                            else{
                                auto obj = present_table->find_var_entry(info->obj);
                                if(obj == NULL){
                                    cerr << "Error, object " << info->obj << " not found\n";
                                    exit(0);
                                }
                                auto cls = present_table->find_class_entry(obj->type);
                                if(cls != NULL){
                                    auto attr = cls->find_var_entry(info->attr_name);
                                    if(attr == NULL){
                                        cerr << "Error, attribute " << info->attr_name << " not found in class " << info->obj << '\n';
                                        exit(0);
                                    }
                                    root->temp = new temp_var(attr->type);
                                    present_table->offset += 8;
                                    if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                                        present_table->parent->size += 8;
                                    }
                                    root->temp->offset = present_table->offset;
                                    int offset = attr->offset;
                                    root->code.push_back(quad("*yo5"s + "(" + info->obj + " + " + to_string(offset) + ")", "", "", tempprint(root->temp)));
                                    root->code.back().res = (temp_var*)root->temp;
                                    root->code.back().typeres = TEMP_VAR;
                                    auto obj = new obj_access();
                                    auto en = present_table->find_var_entry(info->obj);
                                    obj->en = en;
                                    obj->tempidx = 0;
                                    obj->offset = offset;
                                    root->code.back().a1 = obj;
                                    root->code.back().typea1 = OBJ_ACCESS;
                                }
                                else{
                                    
                                }
                            }
                        }
                        
                    }
                    else{
                        cerr << "Error, invalid object access\n";
                        exit(0);
                    }
                }
                else{
                    //???
                }
            }
            else if(root->children.size() == 3){
                if(root->children[0]->data_type != "name_type" or root->children[1]->data_type != "obj_access" || root->children[2]->data_type != "funccall"){
                    cerr << "Error: Invalid object access\n";
                    exit(0);
                }
                auto obj_entry = present_table->find_var_entry(((name_type *)root->children[0]->info)->name_val);
                if(obj_entry == NULL){
                    auto cls_entry = present_table->find_class_entry(((name_type *) root->children[0]->info)->name_val);
                    if(cls_entry != NULL){
                        auto fun = cls_entry->find_fun_entry(((obj_access *) root->children[1]->info)->attr_name);
                        if(fun == NULL){
                            cerr << "Error: Function " << ((obj_access *) root->children[1]->info)->attr_name << " not found in class " << ((name_type *) root->children[0]->info)->name_val << '\n';
                            exit(0);
                        }
                        root->data_type = "funccall";
                        root->info = root->children[2]->info;
                        funccall * info = (funccall *) root->info;
                        info->funcname = fun->name;
                        for(auto it = info->arglist.rbegin(); it != info->arglist.rend(); it++){
                            root->code.push_back(quad("", "", "param", tempprint((*it)->temp)));
                            root->code.back().res = (temp_var*)(*it)->temp;
                            root->code.back().typeres = TEMP_VAR_ARG;
                            // cerr << ((*it)->temp)->tempid << " h8\n"; 
                        }

                        root->code.push_back(quad("", "", "param", obj_entry->name));
                        root->code.back().typeres = TEMP_VAR;

                        string printName = info->funcname;
                        if(fun->func_classname != ""){
                            printName = fun->func_classname + "." + printName;
                        }
                        root->code.push_back(quad(printName, to_string(info->arglist.size()), "callfunc", ""));
                        root->code.back().typea1 = VAR;
                        // root->code.back().typea2 = VAR; todo3
                        root->temp = new temp_var(fun->returntype);
                        // present_table->offset += 8;
                        // root->temp->offset = present_table->offset;
                        root->code.push_back(quad("", "", "popreturn", tempprint(root->temp)));
                        root->code.back().res = (temp_var*)root->temp;
                        root->code.back().typeres = TEMP_VAR;
                    }
                    else{
                        cerr << "Error: Object " << ((name_type *)root->children[0]->info)->name_val << " not found\n";
                        exit(0);
                    }
                }
                else{
                    auto cls = present_table->find_class_entry(obj_entry->type);
                    if(cls == NULL){
                        cerr << "Error: Class " << obj_entry->type << " not found\n";
                        exit(0);
                    }
                    auto fun = cls->find_fun_entry(((obj_access *) root->children[1]->info)->attr_name);
                    if(fun == NULL){
                        cerr << "Error: Function " << ((obj_access *) root->children[1]->info)->attr_name << " not found in class " << obj_entry->type << '\n';
                        exit(0);
                    }
                    root->data_type = "funccall";
                    root->info = root->children[2]->info;
                    funccall * info = (funccall *) root->info;
                    info->funcname = fun->name;
                    for(auto it = info->arglist.rbegin(); it != info->arglist.rend(); it++){
                        root->code.push_back(quad("", "", "param", tempprint((*it)->temp))); // mark
                        root->code.back().res = (temp_var*)(*it)->temp;
                        root->code.back().typeres = TEMP_VAR_ARG;
                    }
                    auto ntemp = new temp_var(cls->name);
                    present_table->offset += 8;
                    root->code.push_back(quad(obj_entry->name, "", "", tempprint(ntemp)));
                    root->code.push_back(quad("", "", "param", obj_entry->name));  // mark
                    root->code.back().typeres = OBJ_FUNC;
                    // cerr<<obj_entry->name<<" hihihi\n"; 
                    string printName = info->funcname;
                    if(fun->func_classname != ""){
                        printName = fun->func_classname + "." + printName;
                    }
                    root->code.push_back(quad(printName, to_string(info->arglist.size() + 1), "callfunc", ""));
                    // root->code.back().typea1 = VAR;
                    // root->code.back().typea2 = VAR; todo3
                    root->temp = new temp_var(fun->returntype);
                    root->code.push_back(quad("", "", "popreturn", tempprint(root->temp)));
                    // root->code.back().res = (temp_var*)root->temp;
                    // root->code.back().typeres = TEMP_VAR;
                }
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
                // cerr << info->sqbrackettestlist_vars.size() << '\n';
            }
            else if(root->children.size() == 3 and root->children[0]->name == "("){
                root->data_type = "brack_test_type";
                root->temp = root->children[1]->temp;
            }
            else if(root->children.size() == 2){
                root->data_type = "sqbrackettestlist_type";
                root->info = new sqbrackettestlist_type();
                sqbrackettestlist_type * info = (sqbrackettestlist_type *) root->info;
            }
            else{
                if(root->children[0]->data_type == "name_type"){
                    // if(present_table->find_var_entry(root->children[0]->name)){
                    //     root->temp = new temp_var("name");
                    //     root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                    // }
                }
                else if(root->children[0]->name == "NUMBER"){
                    // root->info = root->children[1]->info;
                    // annasign * info = ((annasign *) root->info);
                    // info->name = ((atom_expr_name*) root->children[0]->info)->name;
                    // symbol_table_entry * newentry = new symbol_table_entry(((atom_expr_name*) root->children[0]->info)->name, ((annasign*) root->children[1]->info)->type, present_table);
                    // newentry->lineno = root->children[1]->lineno;
                    // present_table->add_entry_var(newentry);
                    // present_table->offset += 8;
                    // newentry->offset = present_table->offset;
                    // if(((annasign*) root->children[1]->info)->inval != NULL){
                    //     root->code.push_back(quad(tempprint(((annasign*) root->children[1]->info)->inval), "", "", ((atom_expr_name*) root->children[0]->info)->name));
                    //     root->code.back().a1 = (temp_var*)(((annasign*) root->children[1]->info)->inval);
                    // }

                    // root->info = new funcdef();
                    // funcdef * info = (funcdef *) root->info;
                    
                    // cerr << "enter number h1\n";
                    temp_var *entry = new temp_var("number");
                    // present_table->offset += 8;
                    // root->temp->offset = present_table->offset;
                    root->temp = entry;
                    root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                    root->code.back().res = (temp_var*)root->temp;
                    root->code.back().typeres = TEMP_VAR;
                    // cerr << root->temp->tempid << " h9\n"; 
                    // root->code.back().typea1 = VAR; todo3
                    
                }
                else if(root->children[0]->name == "STRING"){
                    // cerr << "enter string h2\n";
                    temp_var *entry = new temp_var("string");
                    // present_table->offset += 8;
                    // root->temp->offset = present_table->offset;
                    root->temp = entry;
                    root->code.push_back(quad(root->children[0]->name, "", "", tempprint(root->temp)));
                    root->code.back().res = (temp_var*)root->temp;
                    root->code.back().typeres = TEMP_VAR;
                    // root->code.back().typea1 = VAR; todo3
                }
                else if(root->children[0]->name == "True"){
                    temp_var *entry = new temp_var("True");
                    root->temp = new temp_var("int");
                    // present_table->offset += 8; //cbm
                    // entry->offset = present_table->offset; //cbm
                    root->data_type = "num_type";
                    root->info = new num_type();
                    ((num_type *) root->info)->is_int = true;
                    ((num_type *) root->info)->number = "1";
                    // root->code.push_back(quad("1", "", "", tempprint(root->temp)));
                }
                else if(root->children[0]->name == "False"){
                    temp_var *entry = new temp_var("False");
                    root->temp = new temp_var("int");
                    // present_table->offset += 8; //cbm
                    // entry->offset = present_table->offset; //cbm
                    root->data_type = "num_type";
                    root->info = new num_type();
                    ((num_type *) root->info)->is_int = true;
                    ((num_type *) root->info)->number = "0";
                    // root->code.push_back(quad("0", "", "", tempprint(root->temp)));
                }
                if(root->children[0]->name != "True" and root->children[0]->name != "False"){
                    root->info = root->children[0]->info;
                    root->data_type = root->children[0]->data_type;
                }
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
            info->testlist_vars.push_back(root->children.back()->temp);
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
                if(root->children.size() > 2){
                    info->arglist = ((arglist_type*) root->children[1]->info)->args;
                }
            }
            else if(root->children[0]->name == "["){
                root->data_type = "arr_access";
                root->info = new arr_access();
                arr_access * info = (arr_access *) root->info;
                
                info->accessind = root->children[1]->temp;
                if(root->children[1]->data_type == "atom_expr_name"){
                    if(present_table->find_var_entry(((atom_expr_name *) root->children[1]->info)->name)){
                        if(present_table->find_var_entry(((atom_expr_name *) root->children[1]->info)->name)->type != "int"){
                            cerr << "TypeError: Array index must be an integer\n";
                            exit(0);
                        }
                        info->accessind = new temp_var("int");
                        present_table->offset += 8;
                        if(present_table->type==FUNCTION_TABLE && present_table->parent->type == CLASS_TABLE){
                            present_table->parent->size += 8;
                        }
                        info->accessind->offset = present_table->offset;
                        root->code.push_back(quad(((atom_expr_name *) root->children[1]->info)->name, "", "", tempprint(info->accessind)));
                        root->code.back().res = (temp_var*)info->accessind;
                        root->code.back().typeres = TEMP_VAR;
                        root->code.back().a1 = present_table->find_var_entry(((atom_expr_name *) root->children[1]->info)->name);
                        root->code.back().typea1 = VAR;
                        // cerr << info->accessind->tempid << " h10\n"; 
                        // root->code.back().typea1 = VAR; todo3
                    }
                    else
                        info->access_name = ((atom_expr_name *) root->children[1]->info)->name;
                }
            }
            else if(root->children[0]->name == "."){ // Class Attr
                root->data_type = "obj_access";
                root->info = new obj_access();
                obj_access * info = (obj_access *) root->info;
                info->attr_name = root->children[1]->name;
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
            if(present_table -> type != GLOBAL_TABLE){
                cerr << "Class definition not allowed here\n";
                exit(0);
            }
            string className = root->children[1]->name;
            if(root->children.size() == 5){
                string parentClass = root->children[2]->children[1]->name;
                if(!present_table->find_class_entry(parentClass)){
                    cerr << "Parent class " << parentClass << " not defined\n";
                    exit(0);
                }
                symbol_table * parentTable = present_table->find_class_entry(parentClass);
                if(present_table->find_class_entry(className)){
                    cerr << "Class " << className << " already defined\n";
                    exit(0);
                }
                symbol_table * classTable = new symbol_table(CLASS_TABLE, present_table, className);
                classTable->lineno = root->children[0]->lineno;
                classTable->inher_var_defs = parentTable->var_defs;
                classTable->size = parentTable->size;
                classTable->inher_fun_defs = parentTable->fun_defs;
                present_table->add_entry_class(classTable);
                present_table = classTable;
            }
            else{
                if(present_table->find_class_entry(className)){
                    cerr << "Class " << className << " already defined\n";
                    exit(0);
                }
                symbol_table * classTable = new symbol_table(CLASS_TABLE, present_table, className);
                present_table->add_entry_class(classTable);
                present_table = classTable;
            }
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            present_table = present_table->parent;
        }
        else if(root->name == "cond_parent_class"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
        }
        else if(root->name == "arglist"){
            for(auto r: root->children){
                if(r){
                    make_3ac(r);
                    root->code.insert(root->code.end(), r->code.begin(), r->code.end());
                }
            }
            root->data_type = "arglist_type";
            root->info = new arglist_type();
            arglist_type * info = (arglist_type *) root->info;
            if(root->children.size() == 3){
                info->args = ((arglist_type *) root->children[0]->info)->args;
            }
            info->args.push_back((arg_type*)root->children.back()->info);
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
            if(root->children[0]->data_type == "atom_expr_name"){
                info->name = ((atom_expr_name *) root->children[0]->info)->name;
            }
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
            if(root->name == "bool"){
                root->name = "int";
            }
            root->info = new name_type();
            name_type * info = (name_type *) root->info;
            info->name_val = root->name;
            info->lineno = root->lineno;
            info->offset = root->offset;
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
            if(f) info->is_int = true;
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