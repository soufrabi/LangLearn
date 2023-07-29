#include <fstream>
#include <ios>
#include <iostream>
#include <string>
using namespace std;

int main() {

    fstream f1;
    f1.open("tada2.txt", ios_base::in); // read

    if (f1.is_open()) {
        string line;

        while (getline(f1, line)) {
            cout << line << endl;
        }
    }

    return 0;
}
