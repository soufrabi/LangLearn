#include <iostream>
using namespace std;

// cin and cout are operators cannot be overloaded using member function
// as cin is a member of istream class and cout is a member of ostream class
// use friend functions instead

class A
{
    int a;
public:
    A(int x=0)
    { a=x; }

    friend ostream & operator << (ostream & os, const A &ob)
    {
        os << "a : " << ob.a;
        return os;
    }

    friend istream & operator >> (istream & ,A & );

};

istream &  operator >> (istream &is, A &ob)
{
    is >> ob.a;
    //if you use 
    // is >> ob ;
    //then process exits 139
    //runtime error

    return is;
}

int main(){

    A ob(3);
    cout << ob <<endl;
    cin >> ob;
    cout << ob <<endl;


    return 0;
}
