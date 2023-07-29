#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef long double ld;

class Base{
    public:
        /*
        Base(){
            cout<<"Default Base Constructor"<<endl;
        }
        */
};
class Child1:virtual public Base{
    public:
        Child1(int p){
            cout<<"Default Child1 Constructor "<<p<<endl;
        }

};
class Child2:virtual public Base{
    public:
        Child2(int p,int q){
            cout<<"Default Child2 Constructor "<<p<<" "<<q<<endl;
        }


};
class GC:public Child1,public Child2{
    public:
        GC(int x):Child1(x),Child2(x-1,x+1)    {
            cout<<"Default GC constructor"<<endl;
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

    //GC ob(3);
    Base *ob=new GC(3);
    delete(ob);

    return 0;
}

