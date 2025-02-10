#include "../PPPheaders.h"

int main () {
  int val1, val2;
  // prompt user to enter 2 numbers
  cout << "please enter 2 integers." << endl;
  cin >> val1;
  cin >> val2;
  // calculations
  // smaller and larger
  if (val1 > val2) {
    cout << "larger: " << val1 << endl;
    cout << "smaller: " << val2 << endl;
  } else {
    cout << "larger: " << val2 << endl;
    cout << "smaller: " << val1 << endl;
  }
  // sum, difference, product
  cout << "sum: " << val1 + val2 << endl;
  cout << "difference: " << val1 - val2 << endl;
  cout << "product: " << val1 * val2 << endl;
  // ratio
  double ratio = val1 / val2;
  cout << "ratio: " << ratio << endl;
}
