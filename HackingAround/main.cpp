#include <iostream> //Library for input output

using namespace std; //Standard namespace where C++ Libraries are present

int main() //Main program
{
    int a,b,sum; //Variable declaration
    cout << "Enter first number: "; //Output to screen for first number
    cin >> a; // Return value entered to variable a
    cout << "Enter second number: "; //Output to screen for second number
    cin >> b; // Return value entered to variable b
    sum = a + b; // Add the two variables and apply result to the variable sum
    cout << "Sum of the two numbers are: " << sum; // Output sum to screen
    return 0; // Return success
}
