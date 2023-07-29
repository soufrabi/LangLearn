#include <ios>
#include <iostream>
#include <fstream>
using namespace std;




int main(){

    fstream f1 ;
    f1.open("p1.cpp",ios_base::in);

    string line;
    while(getline(f1,line))
    {
        int num;
        cin>>num;

        if(num==-1){
            break;
        }

        cout<< line <<endl;
    }


    return 0;
}
