#include<bits/stdc++.h>
#include "quad.hpp"
using namespace std;

class temp_var{
public:
    string type;
    int id;
    temp_var(string type);
};
class node{
public:
    int id = -1;
    node* parent;     // index of parent node
    node* next;
    vector<node*> children;   // indexes of children nodes
    string type, name;
    node(string Type, string Name) : type(Type), name(Name){}
    struct{
        bool is_assignable = false;
        bool is_single = false;
        bool is_expression = false;
        int temp_id = 0;
        string info = "";
    } tempparams;
    temp_var * temp_variable = NULL;

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
    map<string, symbol_table_entry*> var_defs;
    map<string, symbol_table*> fun_defs;
    map<string, symbol_table*> class_defs;
    symbol_table(int type, symbol_table* prt = 0, string name = "")
    {
        this->type = type;
        this->parent = prt;
        this->name = name;
    }

    void add_entry_var(symbol_table_entry* val);

    void add_entry_fun(symbol_table * val);

    void add_entry_class(symbol_table* classtable);

    symbol_table_entry * find_var_entry(string name);

    symbol_table* find_fun_entry(string name);

    symbol_table* find_class_entry(string name);
};

