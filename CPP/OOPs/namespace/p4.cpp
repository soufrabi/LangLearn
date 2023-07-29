#include <iostream>
using namespace std;

// Nested Namespace
namespace ns1
{
    int a=10;
    int b=20;
    
    void sum(int x,int y){
        cout<<x+y;
    }

    namespace ns2{
        int a=1;
        int b=2;

        void sum(int x,int y=0){
            cout<<x+y;
        }
    }
}

int main(){

    cout<<ns1::a<<endl;
    cout<<ns1::b<<endl;

    cout<<ns1::ns2::a<<endl;
    cout<<ns1::ns2::b<<endl;

    ns1::sum(5,6);
    cout<<endl;
    ns1::ns2::sum(10);
    cout<<endl;

    return 0;
}
