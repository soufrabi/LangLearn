#include <iostream>
using namespace std;

class A{
    int a;
public:
    A(int x=0):a(x){}

    void* operator new (size_t sz){
        void *temp = malloc(sz);
        // void* temp = ::operator new(sz);
        // also works fine
        for(int i=0;i<sz;i++){
            ((char*)temp)[i]=0;
        }
        return temp;
    }

    void operator delete(void *ptr){
        if(ptr){
           // free(ptr); also works 
           ::operator delete(ptr);
        }
    }

};


int main(){

    A *ptr= new A(23);
    delete(ptr);

    return 0;
}
