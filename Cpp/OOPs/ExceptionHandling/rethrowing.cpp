#include <exception>
#include <iostream>
using namespace std;




int main(){

  int x=-1;
  try{

    try{
      if(x<0) throw x;

    }
    catch(int y){
      cout<< "Partially Handled " << y <<endl;
      throw y-1;
    }
  }
  catch(int y){
    cout<< "Fully Handled " << y <<endl;

  }



  return 0;
}
