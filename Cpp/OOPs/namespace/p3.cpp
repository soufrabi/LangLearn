#include <iostream>
using namespace std;


//methods can be defined outside

namespace ns{

    void fun();
    class Sample{
    public:
        void fun();
    };
}

void ns::fun(){
    cout<<"fun";
}

void ns::Sample::fun(){
    cout<<"Sample fun";
}

int main(){

    ns::Sample ob;
    ob.fun();
    ns::fun();



    return 0;
}
