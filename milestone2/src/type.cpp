#include<bits/stdc++.h>
using namespace std;

string type(string type1, string type2, string op)
{
    if(type1 == type2) return type1;
    if(op == "+" || op == "*" || op == "/" || op == "*"){
        if(type1 == "int" && type2 == "int"){
            return "int";
        }
        else if(type1 == "int" && type2 == "float"){
            return "float";
        }
        else if(type1 == "float" && type2 == "int"){
            return "float";
        }
        else if(type1 == "float" && type2 == "float"){
            return "float";
        }
        else if(type1 == "bool" and type2 == "int"){
            return "int";
        }
        else if(type1 == "int" and type2 == "bool"){
            return "int";
        }
        else if(type1 == "bool" and type2 == "float"){
            return "float";
        }
        else if(type1 == "float" and type2 == "bool"){
            return "float";
        }
        else if(type1 == "bool" and type2 == "bool"){
            return "int";
        }
        else{
            return "error";
        }
    }
    else if(op == ">>" || op == "<<" || op == "^" || op == "|" || op == "&"){
        if(type1 == "bool" || type2 == "bool"){

        }
        if(type1 != "int" or type2 != "int") return "error";
        return "int";
    }
    else if(op == "and" || op == "")
}