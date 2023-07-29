#include <iostream>
using namespace std;


class Number{
    int a;
public:
    Number(int a=0)
    {
        this->a=a;
    }

    void disp() const{
        cout << "a : " <<a <<endl;
    }

    bool operator < (const Number & ob) const
    {
        return a < ob.a;
    }

};

int main(){

    Number n1(10),n2(9);

    if(n1<n2){
        cout << "Less Than" <<endl;
    }
    else{
        cout << "Not Less Than" <<endl;
    }


    return 0;
}
