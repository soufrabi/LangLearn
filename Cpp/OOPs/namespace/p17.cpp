#include <iostream>
using namespace std;

//unnamed namespace
// A namespace without any name is called unnamed namespace.
// Its members can be accessed from any module of the program without any qualification
//
// They are used to protect global data

namespace 
{
    void disp(int x)
    {
        cout<<"in disp "<< x <<endl;
    }
}

int main(){

    disp(10);

    return 0;
}
