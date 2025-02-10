#include "../PPPheaders.h"

int main() {
    string input;
    double temp;
    double smallest = 999999; 
    int largest = 0;
    bool done = false;
    vector<double> numberstored;
    
    // Initial loop to get all of the numbers
    while (true) {
        cin >> input;
        if(input == "|") {
            break;
        }

        //convert
        // find out what the units are
        string units;
        int loc = input.find_first_of("cmif");
        double amount =  stod(input.substr(0, loc));
        units = input.substr(loc);
        //std::string units = input.substr(0,1);
        if (units == "m"){
            cout << amount;
            cout << units << endl;
        } else if (units == "c"){
                cout << amount / 100;
        }

        temp = amount;

        numberstored.push_back(temp);
        
        if(temp > largest) {
            largest = temp;
            cout << "The largest so far is " << largest << endl;
        } else if(temp < smallest) { 
            smallest = temp;
            cout << "The smallest so far is " << smallest << endl;
        }
    }
    
 
    // Outputs all of the numbers that the user input
    cout << smallest << " " << largest << endl;

    // Prints the larger and smaller number
    cout << "The smallest value is " << smallest << endl;
    cout << "The largest value is " << largest << endl;

    // Compares the two inputs
    if (abs(largest - smallest) <= 0.01) {
        cout << "The numbers are almost equal" << endl;
    } else if (largest == smallest) {
        cout << "the numbers are equal" << endl;
    }
    
}