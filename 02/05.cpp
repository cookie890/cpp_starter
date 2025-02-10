#include "../PPPheaders.h"

// result is that a > b > c
int main () {
  string a, b, c, temp;
  cout << "enter three strings" << endl;
  cin >> a >> b >> c;
  cout << "INPUT: " << a << "," << b << "," << c << endl;
  //sort em
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

  cout << "OUTPUT: " << c << "," << b << "," << a << endl;
}
