#include <iostream>
using namespace std;

// Scope resolution operator

int k=100;
int main()
{
    int k=20;
    {
        int k=30;
        cout<<"k="<<k;
        cout<<"::k="<<::k;
        {
            int k=40;
            cout<<"k="<<k;
            cout<<"::k="<<::k;
        }
    }
    cout<<"k="<<k;
    cout<<"::k="<<::k;

    return 0;
}


