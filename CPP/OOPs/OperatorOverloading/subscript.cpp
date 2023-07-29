#include <iostream>
using namespace std;

// Subscript operator

class Array{
    int size;
    int *A;
public:
    Array(int sz){
        this->size=sz;
        A = new int [size];;
        
        for(int i=0;i<sz;i++){
            A[i]=i+1;
        }
    }

    int & operator [] (int index){

        if(index<0 || index>=size){
            cout<<"Array Index Out of Bounds Error"<<endl;
            exit(1);

        }
        return A[index];
    }
    // reference is returned so this can be placed at the left hand side of the assignment operator
};


int main(){

    Array ob1(5);
    int x= ob1[2];
    cout<< x <<endl;

    return 0;
}
