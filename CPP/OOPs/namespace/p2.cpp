#include <iostream>
using namespace std;

namespace ns {
    void fun(){
         cout<<"fun";
    }

    class Sample{
    public:
        void fun(){
            cout<<"Sample fun";
        }

        // if Sample::fun was static
        // ns2::Sample::fun
    };
}
int main(){

    ns::Sample ob;
    ob.fun(); //Sample fun
    ns::fun(); //fun

    return 0;
}
