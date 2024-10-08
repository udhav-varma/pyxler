#include<bits/stdc++.h>
#include "quad.hpp"
using namespace std;
class temp_var{
public:
    string type;
    int id;
    bool is_literal = true;
    temp_var(string type);
};

struct name_type{
    string name_val;
    int lineno = 0;
};

struct test_type{
    temp_var * temp;
};

struct testlist_type{
    vector<temp_var*> testlist_vars;
};

struct sqbrackettestlist_type{
    vector<temp_var*> sqbrackettestlist_vars;
};

struct keyword_type{
    string keyword;
};

struct list_name_type{
    string name;
    string type;
    sqbrackettestlist_type * vals;
};

struct delim_type{
    string delim;
};

struct num_type{
    string number;
    bool is_int;
};

struct op_type{
    string op;
};

struct str_type{
    string str;
};

struct arg_type{
    temp_var * temp;
    string name;
};

struct arglist_type{
    vector<arg_type*> args;
};

struct arr_access{
    string name;
    temp_var * accessind;
    string access_name;
};

struct funccall{
    string funcname;
    vector<arg_type*> arglist;
};

struct atom_expr_list{
    vector<temp_var *> tstlist;
};

struct atom_expr_name{
    string name;
    int lineno;
};

struct atom_expr_number{
    string num;
};

struct atom_expr_keyword{
    string keyword;
};

struct funcarg{
    string name;
    string type;
    bool hasdefval = false;
    temp_var * defval = NULL;
    int lineno = 0;
};

struct funcarglist{
    vector<funcarg*> args;
};

struct annasign{
    string name;
    string type;
    temp_var * inval;
};

struct funcdef{
    string name;
    string returntype;
    funcarglist * args;
};

struct obj_access{
    temp_var * obj_base;
    string attr_name;
    string obj;
};

class node{
public:
    int id = -1;
    node* parent;     // index of parent node
    node* next;
    vector<node*> children;   // indexes of children nodes
    string type, name;
    node(string Type, string Name) : type(Type), name(Name){}
    void * info;
    string data_type;
    struct temp_var * temp = NULL;
    vector<quad> code;
    int lineno = 0;
};

class AST{
public:
    ofstream logout;
    int sz = 0;
    vector<node*> tree;
    string dotcode = "";
    set<string> delims{
                        "=", "+", "/", "*", "-", "**", "+=", "-=", "*=", "/=", "==", "|", "&", "^", "|=", "&=", "^=", "//", "%", "<",
                        ">", "<=", ">=", "!=", "<<", ">>"
                        };
    void add_node(node* node);

    void add_edge(node* parent, node* child);

    string intToString(int x);

    void fixfs(node * node);
    void idfs(node* node);

    void jdfs(node* node);


    void dfs1(node* node, int &i);

    void dfs2(node* node);

    void graphviz(node * ptr);

};


class NODE{
public:
    node * ptr;
    string val;
};

enum SYMBOL_TABLE_TYPE{
    GLOBAL_TABLE,
    FUNCTION_TABLE,
    CLASS_TABLE
};
class symbol_table;


class symbol_table_entry
{
public:
    string name;
    symbol_table* table = nullptr;
    string type;
    int offset = 0;
    int size = 8;
    int numel = 1;
    int lineno = 0;
    symbol_table_entry(string name, string type, symbol_table* table = 0)
    {
        this->name = name;
        this->type = type;
        this->table = table;
    }
};

class symbol_table
{
public:
    int type;
    string name;
    symbol_table * parent = nullptr;
    string returntype;
    map<string, symbol_table_entry*> var_defs;
    map<string, symbol_table*> fun_defs;
    map<string, symbol_table*> class_defs;
    string inher_class = "";
    map<string, symbol_table_entry*> inher_var_defs;
    map<string, symbol_table*> inher_fun_defs;
    map<string, symbol_table*> inher_class_defs;
    vector<funcarg*> args;
    string func_classname = "";
    int size = 0;
    int lineno = 0;
    symbol_table(int type, symbol_table* prt = 0, string name = "")
    {
        this->type = type;
        this->parent = prt;
        this->name = name;
    }

    void add_entry_var(symbol_table_entry* val, bool inc_offset = true);

    void add_entry_fun(symbol_table * val);

    void add_entry_class(symbol_table* classtable);

    symbol_table_entry * find_var_entry(string name);

    symbol_table* find_fun_entry(string name);

    symbol_table* find_class_entry(string name);
};


void make_3ac(node * root);