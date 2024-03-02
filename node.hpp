#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int id = -1;
    node* parent;     // index of parent node
    vector<node*> children;   // indexes of children nodes
    string type, name;
    node(string Type, string Name) : type(Type), name(Name){}
};

class AST{
public:
    int sz = 0;
    vector<node*> tree;
    string dotcode = "";

    void add_node(node* node){
        tree.push_back(node);
        sz++;
    }

    void add_edge(node* parent, node* child){
        if(child == NULL){
            return;
        }
        parent->children.push_back(child);
        child->parent = parent;
    }

    string intToString(int x){
        string s = "";
        while(x){
            s.push_back(x%10 + '0');
            x /= 10;
        }
        reverse(s.begin(), s.end());
        return s;
    };

    void dfs1(node* node, int &i){
        if(node->id==-1){
            node->id = i++;
            string s = intToString(node->id) + "[label=\"" + node->name + "\"]\n";
            dotcode.append(s);
        }
        for(auto u: node->children){
            dfs1(u, i);
        }
    }

    void dfs2(node* node){
        for(auto u: node->children){
            string s1 = intToString(node->id) + " -> " + intToString(u->id) + "\n";
            dotcode.append(s1);
            dfs2(u);
        }
    }

    void graphviz(node * ptr){
        int id = 1;
        dotcode.append("digraph AST{\n");
        dfs1(ptr, id);
        dfs2(ptr);
        dotcode.append("}\n");
        cout<<dotcode;
    }

};


class data{
public:
    node * ptr;
    string val;
};