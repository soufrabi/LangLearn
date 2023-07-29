#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef long double ld;

class Base{
    public:
        Base(){
            cout<<"Default Base Constructor"<<endl;
        }
        virtual ~Base(){
            cout<<"Base destructor"<<endl;
        }
};
class Child1:virtual public Base{
    public:
        Child1(int p,int q){
            cout<<"Default Child1 Constructor "<<p<<" "<<q<<endl;
        }
         ~Child1(){
            cout<<"Child1 destructor"<<endl;
        }

};
class Child2:virtual public Base{
    public:
        Child2(int p){
            cout<<"Default Child2 Constructor "<<p<<endl;
        }
         ~Child2(){
            cout<<"Child2 destructor"<<endl;
        }



};
class GC: public Child1, public Child2{
    public:
        GC(int x):Child1(x){
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

    Child1 *ob2=new GC();
    delete(ob2);


    cout<<endl;
    Base *ob3=new GC();
    delete(ob3); 
    return 0;
}

