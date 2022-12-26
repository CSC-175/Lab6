// The factorial of a number n is the product of all numbers from 1 up to the number n.
// For example, if n=5 then the factorial of 5 will be 1*2*3*4*5= 120, so 5!= 120
// Complete the given template that prompts a user to enter a positive integer 
// less than 13 by creating a function called factorial. The function accepts an 
// integer n as input and uses a for loop to calculate the factorial of n and return 
// the resulting factorial.

#include <iostream>
using namespace std;

// place your code for the factorial function here

int main() {
    int n = 0, valid=false;

    while (!valid){
        cout << "Enter a positive integer: ";
        cin >> n;
        if (n < 0 or n > 12) {
            cout << "Invalid integer! Try again!\n";
            continue;
        }
        valid = true;
    }

    cout << n << " factorial is equal to " << factorial(n) << endl;
    return 0;
}
