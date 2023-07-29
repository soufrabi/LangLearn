
#include <iostream>
using namespace std;

class Base{
public:
    virtual void show()=0;
};

class Child1:public Base
{
public:
    void show(){
        cout<<"Child 1 show"<<endl;
    }
};

class Child2:public Base
{
public:
    void show(){
        cout<<"Child 2 show"<<endl;
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

    Base *ob[2];
    ob[0]=new Child1();
    ob[1]=new Child2();
    ob[0]->show();
    ob[1]->show();

    return 0;
}

