#include <iostream>
using namespace std;

namespace two
{
    namespace intwo
    {
        int q=10;
    }

    int q=20;
}


int main(){

    using namespace two;
    q=100; //outer q gets changed

    using two::intwo::q;
    q=300; //inner q gets changed
           //namespace gets overriden
    cout<< q <<endl;
    cout<< two::q <<endl;
    


    return 0;
}
