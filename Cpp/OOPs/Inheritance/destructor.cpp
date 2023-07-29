#include <iostream>
using namespace std;

class Base{

public:
    Base(){
        cout<<"Default Base constructor"<<endl;
    }
    ~Base(){
        cout<<"Base destructor"<<endl;
    }

};

class Child:public Base
{
public:
    Child(){
        cout<<"Default Child constructor"<<endl;
    }
    ~Child(){
        cout<<"Child destructor"<<endl;
    }

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Child ob;

    return 0;
}

