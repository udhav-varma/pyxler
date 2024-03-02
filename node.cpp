#include<bits/stdc++.h>

using namespace std;


struct node{
    int id;
    node* parent;     // index of parent node
    vector<node*> children;   // indexes of children nodes
    string type, name;
    node(string Type, string Name) : type(Type), name(Name){}
};

struct AST{

    int sz = 0;
    vector<node*> tree;
    string dotcode = "";

    void add_node(node* node){
        tree.push_back(node);
        sz++;
    }

    void add_edge(node * parent, node* child){
        parent->children.push_back(child);
        child->parent = parent;
    }

    void dfs(int u){

    }

    void graphviz(){
        dotcode.append("digraph AST{");
        dfs(0);
        dotcode.append("}");
    }

};