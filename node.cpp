#include<bits/stdc++.h>

using namespace std;

enum Type{
    NON_TERMINAL,
    KEYWORD,
    ID,
    OPERATOR,
    INDENT,
    DEDENT,
    LITERALS,
    DELIMITER
};

struct Node{

    int num;    // index of node in the syntax tree (needed for graphviz ?)
    int type;   // type of node
    int parent;     // index of parent node
    vector<int> children;   // indexes of children nodes
    string name;    // (for graphviz ?)

    Node(int Type, string Name, int Num) : type(Type), name(Name), num(Num) {}

};

struct AST{

    int sz = 0;
    vector<Node*> tree;
    string dotcode = "";

    void add_node(Node* node){
        tree.push_back(node);
        sz++;
    }

    void add_edge(int parent, int child){
        tree[parent]->children.push_back(child);
        tree[child]->parent = parent;
    }

    void dfs(int u){

    }

    void graphviz(){
        dotcode.append("digraph AST{");
        dfs(0);
        dotcode.append("}");
    }

};