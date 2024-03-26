#include<bits/stdc++.h>
using namespace std;

struct A{
    int a = 5;
};

struct B{
    string s;
};

struct C{
    vector<int> p;
};

class cs{
public:
void * info;
};

int main(void)
{
    cs a;
    int p;
    cin >> p;
    if(p == 1){
        a.info = new A();
    }
    else if(p == 2){
        a.info = new B();
        B * info = (B*) a.info;
        info->s = "hello";
    }
    else if(p == 3){
        a.info = new C();
    }
    cout << ((B*)a.info)->s << '\n';
}