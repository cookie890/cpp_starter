#include "../PPPheaders.h"

int main()
{
  int pennies, nickels, dimes, quarters, half, full;
  int total;
  
  // pennies
  cout << "how many pennies do you have? ";
  cin >> pennies;
  // nickels
  cout << "how many nickels do you have? ";
	cin >> nickels;
  // dimes
  cout << "how many dimes do you have? ";
  cin >> dimes;
  // quarters
  cout << "how many quarters do you have? ";
  cin >> quarters;
  // half
  cout << "how many half-dollar coins do you have? ";
  cin >> half;
  // full
  cout << "how many one-dollar coins do you have? ";
  cin >> full;

  // output
  cout << "You have " << pennies << " pennies.\n";
  cout << "You have " << nickels << " nickels.\n";
  cout << "You have " << dimes << " dimes.\n";
  cout << "You have " << quarters << " quarters.\n";
  cout << "You have " << half << " half dollars.\n";
  cout << "You have " << full << " one-dollar coins.\n";

  total = full * 100 + half * 50 + quarters * 25 + dimes * 10 + nickels * 5 + pennies;
  cout << "The value of all your coins is " << total << " cents." << endl;

}
