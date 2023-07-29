#include <iostream>
using namespace std;

class Base{

    int a;
protected:
   int b;
public:
   int c;
};



class Child:public Base
{
    int x;
protected:
    int y;
public:
    int z;

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
    //ob.x;
    //ob.y;
    ob.z;

    //ob.a;
    //ob.b;
    ob.c;
    return 0;
}

