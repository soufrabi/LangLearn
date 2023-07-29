
#include <iostream>
using namespace std;

class Base1{
public:
    Base1(){
        cout<<"Default Base 1 constructor"<<endl;
    }
     void show(){
        cout<<"Base 1 show"<<endl;
    }
};

class Base2{
public:
    Base2(){
        cout<<"Default Base 2 constructor"<<endl;
    }
    void show(){
        cout<<"Base 2 show"<<endl;
    }

};

class Child:public Base2,public Base1
{
public:
    Child(){
        cout<<"Default Child Constructor"<<endl;
    }
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
    ob1.Base1::show();

    Base1 *ob2=new Child();
    ob2->Base1::show();
    //ob2->Base2::show();
    return 0;
}

