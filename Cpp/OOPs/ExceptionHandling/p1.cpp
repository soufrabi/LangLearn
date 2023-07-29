#include <iostream>
using namespace std;

class ZeroDivide {
public:
  ZeroDivide() { cout << "Div by Zero exception caught" << endl; }

  void disp() { cout << "Zero divide display : " << endl; }
};

double divide(int a, int b) {
  if (b == 0)
    throw ZeroDivide();

  return (double)a / b;
}

int main() {

  try {
    cout << divide(3, 4) << endl;
    cout << divide(3, 0) << endl;
  } catch (ZeroDivide e) {

    e.disp();
  }

  return 0;
}
