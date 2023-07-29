#include <ios>
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream myFile;

    myFile.open("tada.txt",ios_base::out);

    if (myFile.is_open()){
        myFile << "Hello\n";
        myFile << "This is the second line\n";
        myFile.close();

    }

    fstream myFile2;

    myFile2.open("tada2.txt",ios_base::app);

    if (myFile2.is_open()){
        myFile2 << "Hello\n";
        myFile2 << "This is the second line\n";
        myFile2.close();

    }

    return 0;
}
