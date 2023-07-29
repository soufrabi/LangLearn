#include <iostream>
using namespace std;

class Base{
    int a;
protected:
    int b;
public:
    Base(int x){
        cout<<"Parameterized Base Constructor"<<endl;
        a=x;
    }
    void show(){
        cout<<"a = "<<a<<endl;
    }


};

class Child:public Base
{
    int x;
public:
    Child(int p,int q):Base(p+q){
        cout<<"Default Child constructor"<<endl;
        x=p;
        b=q;
    }
    void show(){
        cout<<"x = "<<x<<endl;
        Base::show();
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

    Child ob(3,2);
    ob.show();
    return 0;
}

