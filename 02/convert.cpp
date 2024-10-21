#include "../PPPheaders.h"

constexpr double KM = 1.609;

// converts mi to km
int main () {
  double miles;
  double km;
  cin >> miles;
  cout << "The amount of kilometers is " << miles * KM << endl;
}
