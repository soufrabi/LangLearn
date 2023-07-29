#include <iostream>
using namespace std;

class Base{

    int a;
public:
    void set_a(int x){
        a=x;
    }
    void disp(){
        cout<<"a = "<<a<<endl;
    }
};

class Child:public Base
{
    int b;
public:
    void set_b(int y){
        b=y;
    }
    void disp(){
        cout<<"b = "<<b<<endl;
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
//    ob.a =10  will show an error
    ob.set_a(10);
    ob.set_b(12);
    ob.disp();

    return 0;
   


    return 0;
}

