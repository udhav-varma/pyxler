#include "node.hpp"
int temp_id_ = 0;
void AST::add_node(node* node){
    tree.push_back(node);
    sz++;
}

void AST::add_edge(node* parent, node* child){
    if(child == NULL){
        return;
    }
    parent->children.push_back(child);
    child->parent = parent;
}

string AST::intToString(int x){
    string s = "";
    while(x){
        s.push_back(x%10 + '0');
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
};

void AST::fixfs(node * node)
{
    
    cerr << "fixfs " << node->name << '\n';
    for(auto it = node->children.begin(); it != node->children.end(); it++){
        auto u = *it;
        u = u->next;
        if(delims.count(u->name) and u->children.size() <= 1){
            cerr << "inside if " << node->name << ' ' << u->name << '\n';
            node->name = u->name;
            node->type = u->type;
            node->children.erase(it);
            node->children.insert(node->children.end(), begin(u->children), end(u->children));    
            delete(u);
            break;
        }
    }
    for(auto u: node->children){
        fixfs(u->next);
    }
}

void AST::idfs(node* node)
{
    for(auto u: node->children){
        idfs(u);
    }
    if(node->children.size() != 1 || node->type != "nt"){
        node->next = node;
    }
    else{
        node->next = node->children[0]->next;
    }
}

void AST::jdfs(node* node)
{
    for(auto u: node->children){
        jdfs(u);
    }
    node->next = node;
}

void AST::dfs1(node* node, int &i){
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
        string s = "\t" + intToString(node->id) + "[label=\"" + node->type + "\\n( " + newstr + " )\"]\n";
        if(node->type==""){
            s = "\t" + intToString(node->id) + "[label=\"" + newstr + "\"]\n";
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

void AST::dfs2(node* node){
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

void AST::graphviz(node * ptr){
    int id = 1;
    dotcode.append("digraph AST{\n");
    logout = ofstream("logs.txt");
    // idfs(ptr);
    jdfs(ptr);
    // fixfs(ptr);`
    dfs1(ptr, id);
    dfs2(ptr);
    dotcode.append("}\n");
    ofstream fout("graph.dot");
    fout << dotcode;
    // fout.close();
    // system("dot -T pdf -ograph graph.dot");
}
void symbol_table::add_entry_var(symbol_table_entry* val, bool inc_offset)
{
    if(val == NULL){
        throw logic_error("Symbol table entry is NULL\n");
    }
    if(var_defs.find(val->name) != var_defs.end()){
        throw logic_error("Symbol table entry for variable already exists\n");
    }
    if(inc_offset){
        val->offset = this->size;
        this->size += 8;
    }
    val->table = this;
    var_defs[val->name] = val;
}

void symbol_table::add_entry_fun(symbol_table * val)
{
    if(val == NULL){
        throw logic_error("Symbol table is NULL\n");
    }
    if(fun_defs.find(val->name) != fun_defs.end()){
        throw logic_error("Symbol table entry for function already exists\n");
    }
    val->parent = this;
    fun_defs[val->name] = val;  
}

void symbol_table::add_entry_class(symbol_table* classtable)
{
    if(classtable == NULL){
        throw logic_error("Symbol Table is NULL");
    }
    if(class_defs.find(classtable->name) != class_defs.end()){
        throw logic_error("Symbol table entry for class already exists\n");
    }
    classtable->parent = this;
    class_defs[classtable->name] = classtable;
}

symbol_table_entry * symbol_table::find_var_entry(string name)
{
    if(var_defs.find(name) == var_defs.end()){
        if(inher_var_defs.find(name) == inher_var_defs.end()){
            if(this->parent != NULL) return this->parent->find_var_entry(name);
            else
                return NULL;
        }
        else return inher_var_defs[name];
    }
    else return var_defs[name];
}

symbol_table* symbol_table::find_fun_entry(string name)
{
    if(fun_defs.find(name) == fun_defs.end()){
        if(inher_fun_defs.find(name) == inher_fun_defs.end()){
            if(this->parent != NULL) return this->parent->find_fun_entry(name);
            else
                return NULL;
        }
        else return inher_fun_defs[name];
    }
    else return fun_defs[name];
}
symbol_table* symbol_table::find_class_entry(string name)
{
    if(class_defs.find(name) == class_defs.end()){
        if(this->parent != NULL) return this->parent->find_class_entry(name);
        else
            return NULL;
    }
    else return class_defs[name];
}

temp_var::temp_var(string type)
{
    temp_id_++;
    this->id = temp_id_;
    this->type = type;
}

string findMergeType(string t1, string t2)
{
    if(t1 == t2) return t1;
    if(t1 == "int" and t2 == "float") return "float";
    if(t1 == "float" and t2 == "int") return "float";
    if(t1 == "bool" and t2 == "int") return "int";
    if(t1 == "int" and t2 == "bool") return "int";
    return "ERROR";
}

quad::quad(string arg1, string arg2, string op, string result)
{
    this->arg1 = arg1;
    this->arg2 = arg2;
    this->op = op;
    this->result = result;
}