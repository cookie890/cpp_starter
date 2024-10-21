#include "../PPPheaders.h"

// result is that a > b > c
int main () {
  int a, b, c, temp;
  cout << "enter some number" << endl;
  cout << "INPUT: " << a << "," << b << "," << c << endl;
  //sort em
  cin >> a >> b >> c;
  if (a < b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (a < c) {
    temp = a;
    a = c;
    c = temp;
  }
  if (b < c) {
    temp = b;
    b = c;
    c = temp;
  }

  cout << "OUTPUT: " << a << "," << b << "," << c << endl;
}
