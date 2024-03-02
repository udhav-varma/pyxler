#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    while(getline(cin, str)){
        stringstream stream(str);
        string x;
        while(stream >> x){
            if(x == "{return"){
                string y;
                stream >> y;
                cout << "{printf(\"" << y.substr(0, y.size() - 2) << "\");} ";
            }
            else{
                cout << x << ' ';
            }
        }
        cout << '\n';
    }    
}