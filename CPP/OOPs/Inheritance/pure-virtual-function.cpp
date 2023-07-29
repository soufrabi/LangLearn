
#include <iostream>
using namespace std;

class Base{
public:
    virtual void show()=0;
};

class Child:public Base
{
public:
    void show(){
        cout<<"Child show"<<endl;
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

    Child ob1;
    ob1.show();

    Base *ob2=new Child();
    ob2->show();
    return 0;
}

