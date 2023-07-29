#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef long double ld;

class Base{
    public:
        Base(){
            cout<<"Default Base Constructor"<<endl;
        }
        ~Base(){
            cout<<"Base destructor"<<endl;
        }
};
class Child1:virtual public Base{
    public:
        Child1(){
            cout<<"Default Child1 Constructor"<<endl;
        }
        ~Child1(){
            cout<<"Child1 destructor"<<endl;
        }

};
class Child2:virtual public Base{
    public:
        Child2(){
            cout<<"Default Child2 Constructor"<<endl;
        }
        ~Child2(){
            cout<<"Child2 destructor"<<endl;
        }



};
class GC:public Child1,public Child2{
    public:
        GC(){
            cout<<"Default GC constructor"<<endl;
        }
        ~GC(){
            cout<<"GC destructor"<<endl;
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

    GC ob1;
    //Base *ob2=new GC();

    return 0;
}

