#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int id = -1;
    node* parent;     // index of parent node
    node* next;
    vector<node*> children;   // indexes of children nodes
    string type, name;
    node(string Type, string Name) : type(Type), name(Name){}
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

    void fixfs(node * node)
    {
        for(auto u: node->children){
            fixfs(u->next);
        }
        cerr << "fixfs " << node->name << '\n';
        auto pt = node->children.end();
        int cnt = 0;
        for(auto it = node->children.begin(); it != node->children.end(); it++){
            auto u = *it;
            u = u->next;
            if(delims.count(u->name) and u->children.size() <= 1){
                cnt++;
                pt = it; 
                // cerr << "inside if " << node->name << ' ' << u->name << '\n';
                // node->name = u->name;
                // node->type = u->type;
                // node->children.erase(it);
                // node->children.insert(node->children.end(), begin(u->children), end(u->children));    
                // delete(u);
                // break;
            }
        }
        if(cnt == 1){
            auto u = *pt;
            u = u->next;
            cerr << "inside if " << node->name << ' ' << u->name << '\n';
            node->name = u->name;
            node->type = u->type;
            node->children.erase(pt);
            node->children.insert(node->children.end(), begin(u->children), end(u->children));    
            delete(u);
        }
    }
    void idfs(node* node)
    {
        for(auto u: node->children){
            idfs(u);
        }
        if(node->children.size() != 1){
            node->next = node;
        }
        else{
            node->next = node->children[0]->next;
        }
    }

    void jdfs(node* node)
    {
        for(auto u: node->children){
            jdfs(u);
        }
        // if(node->children.size() != 1){
            node->next = node;
        // }
        // else{
        //     node->next = node->children[0]->next;
        // }
    }


    void dfs1(node* node, int &i){
        node->id = i++;
        if(node->type != "nt"){
            string newstr = "";
            for(auto x: node->name){
                if((x=='\'') || (x=='\"') || (x=='\\')){
                    newstr.push_back('\\');
                    newstr.push_back(x);
                }
                else if(x=='\n'){
                    newstr.append("\\n");
                }
                else if(x=='\r'){
                    newstr.append("\\r");
                }
                else if(x=='\t'){
                    newstr.append("\\t");
                }
                else if(x=='\b'){
                    newstr.append("\\b");
                }
                else if(x=='\v'){
                    newstr.append("\\v");
                }
                else if(x=='\f'){
                    newstr.append("\\f");
                }
                else if(x=='\0'){
                    newstr.append("\\0");
                }
                else{
                    newstr.push_back(x);
                }
            }
            node->name = newstr;
            string s = "\t" + intToString(node->id) + "[label=\"" + node->type + "\\n( " + node->name + " )\"]\n";
            if(node->type==""){
                s = "\t" + intToString(node->id) + "[label=\"" + node->name + "\"]\n";
                string t = "\t" + intToString(node->id) + "[color=\"maroon\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="NUMBER"){
                string t = "\t" + intToString(node->id) + "[color=\"red\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="DELIMITER"){
                string t = "\t" + intToString(node->id) + "[color=\"blue\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="IDENTIFIER"){
                string t = "\t" + intToString(node->id) + "[color=\"green\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="STRING LITERAL"){
                string t = "\t" + intToString(node->id) + "[color=\"cyan\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="KEYWORD"){
                string t = "\t" + intToString(node->id) + "[color=\"purple\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="DELIMITER"){
                string t = "\t" + intToString(node->id) + "[color=\"orange\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            else if(node->type=="OPERATOR"){
                string t = "\t" + intToString(node->id) + "[color=\"violet\" shape=\"rectangle\"]\n";
                dotcode.append(t);
            }
            dotcode.append(s);
        }
        else{
            string s = "\t" + intToString(node->id) + "[label=\"" + node->name + "\"]\n";
            dotcode.append(s);
        }       

        for(auto u: node->children){
            dfs1(u->next, i);
        }
    }

    void dfs2(node* node){
        logout << "Parse tree node: " << node->name << "\n";
        logout << "Edges to: \n";
        for(auto u: node->children){
            logout << "node " << u->name << "\n";
        }
        logout << "\n";
        for(auto u: node->children){
            string s1 = "\t" + intToString(node->id) + " -> " + intToString(u->next->id) + "\n";
            dotcode.append(s1);
            dfs2(u->next);
        }
    }

    void graphviz(node * ptr){
        int id = 1;
        dotcode.append("digraph AST{\n");
        logout = ofstream("logs.txt");
        idfs(ptr);
        // fixfs(ptr);
        dfs1(ptr, id);
        dfs2(ptr);
        dotcode.append("}\n");
        ofstream fout("graph.dot");
        fout << dotcode;
        // fout.close();
        // system("dot -T pdf -ograph graph.dot");
    }

};


class NODE{
public:
    node * ptr;
    string val;
};