#include "../PPPheaders.h"

int main()
{
cout << "Enter the name of the person you want to write to\n";
string first_name; // first_name is a var iable of type string
cin >> first_name; // read characters into first_name

cout << "Enter your friend's name here\n";
string friend_name;
cin >> friend_name;

cout << "Enter the recipient's age\n";
int friend_age;
cin >> friend_age;

if (friend_age <= 0 || friend_age >= 110) {
	simple_error("you're kidding!");
}

cout << "Dear " << first_name << ",\n";
cout << "\tHow are you? I hope you are doing well.\n";
cout << "Have you seen " << friend_name << " lately?\n";
cout << "I hear you just had a birthday and you are " << friend_age << " years old.\n";

if (friend_age < 12) {
	cout << "Next year you will be " << ++friend_age << ".\n";
} else if (friend_age == 17) {
	cout << "Next year you will be able to vote.\n";
} else if (friend_age > 70) {
	cout << "Are you retired?\n";
}

cout << "Yours sincerely,\n\n\n Ellie Chung";

}
