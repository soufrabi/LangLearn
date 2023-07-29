#include <iostream>
using namespace std;

class Base{

public:
    Base(int x){
        cout<<"Parameterized Base Constructor"<<endl;
    }
    /*
    Base(){
        cout<<"Default Base constructor"<<endl;
    }
    */

};

class Child:public Base
{
public:
    Child():Base(3){
        cout<<"Default Child constructor"<<endl;
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

