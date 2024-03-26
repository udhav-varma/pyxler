#include <bits/stdc++.h>
#include "node.hpp"

symbol_table * present_table;

string tempprint(temp_var * temp)
{
    return "$"s + to_string(temp->id);
}

void make_3ac(node * root)
{
    if(root->type == "nt"){
        for(auto r: root->children){
            if(!r){
                make_3ac(r);
                root->code.insert(root->code.end(), r->code.begin(), r->code.end());
            }
        }
        vector<quad> beg_code, end_code;
        if(root->name == "file_input"){

        }   
        else if(root->name == "nstatement"){

        }
        else if(root->name == "funcdef"){
            beg_code.push_back(quad("beginfunc", root->children[1]->name, "", ""));
            // TODO - Paramters
            end_code.push_back(quad("endfunc", root->children[1]->name, "", ""));
        }
        else if(root->name == "parameters"){
            //TODO this and funcdef
        }
        else if(root->name == "typedarglist"){

        }
        else if(root->name == "tfpdef"){

        }
        else if(root->name == "simple_stmts"){
            
        }
        else if(root->name == "expr_stmt"){
            
        }
        else if(root->name == "annasign"){

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

        }
        else if(root->name == "cond_else_colon_suite"){

        }
        else if(root->name == "close_eliftestsuite"){

        }
        else if(root->name == "while_stmt"){

        }
        else if(root->name == "for_stmt"){

        }
        else if(root->name == "suite"){

        }
        else if(root->name == "plus_stmt"){

        }
        else if(root->name == "or_test"){

        }
        else if(root->name == "and_test"){

        }
        else if(root->name == "not_test"){

        }
        else if(root->name == "comparison"){

        }
        else if(root->name == "expr"){

        }
        else if(root->name == "xor_expr"){

        }
        else if(root->name == "and_expr"){

        }
        else if(root->name == "shift_expr"){

        }
        else if(root->name == "arith_expr"){

        }
        else if(root->name == "term"){

        }
        else if(root->name == "factor"){

        }
        else if(root->name == "power"){
            if(root->children.size() == 1){
                root->data_type = root->children[0]->data_type;
                root->info = root->children[0]->info;
                root->temp = root->children[0]->temp;
            }
            else if(root->children.size() == 3){
                
            }
        }
        else if(root->name == "atom_expr"){
            if(root->children.size() == 1){
                if(root->children[0]->data_type == "name_type"){
                    root->info = new atom_expr_name();
                    atom_expr_name * info = (atom_expr_name *) root->info;
                    info->name = ((name_type *)root->children[0]->info)->name_val;
                }
                else if(root->children[0]->data_type == "num_type"){
                    root->info = new atom_expr_number();
                    atom_expr_number * info = (atom_expr_number *) root->info;
                    info->num = ((num_type *) root->children[0]->info)->number;
                }
                else if(root->children[0]->data_type == "keyword_type"){
                    root->info = new atom_expr_keyword();
                    atom_expr_keyword * info = (atom_expr_keyword *) root->info;
                    info->keyword = ((keyword_type *) root->children[0]->info)->keyword;
                }
                else if(root->children[0]->data_type == "sqbrackettestlist_type"){
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
            if(root->children.size() == 3){
                info->has_defval = true;
                info->name = ((name_type*) root->children[0])->name_val;
                info->defval = ((test_type*) root->children[2])->temp;
            }
            else{
                info->has_defval = false;
                info->name = ((name_type*) root->children[0])->name_val;
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