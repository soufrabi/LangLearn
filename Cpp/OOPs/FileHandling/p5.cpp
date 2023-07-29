#include <fstream>
#include <ios>
#include <iostream>
using namespace std;




int main(){

    ofstream fout("output.txt");

    fout << "Hello File Handler" << endl;
    fout << "Second line File Handler" <<endl;

    ifstream fin("output.txt");

    if(!fin){
        cout << "Error opening file! "<<endl;
        return 1;
    }

    string line;


    streampos pos = fin.tellg();
    cout << pos << " : ";

    while(getline(fin,line))
    {

        cout<<line<<endl;

        streampos pos = fin.tellg();
        cout << pos << " : ";

        fin.seekg(pos);

    }

    



    return 0;
}
