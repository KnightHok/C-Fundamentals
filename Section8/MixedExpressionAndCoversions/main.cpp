#include <iostream>

using namespace std;

int main() {
    // declare 3 int variables
    int num1, num2, num3;
    
    cout << "Enter in 3 numbers all seperated by a space: ";
    
    // userinputs of numbers
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    // sum of numbers
    int sum = num1 + num2 + num3;
    
    // average of numbers
    double average = sum / 3;
    
    cout << num1 << " " << num2 << " " << num3 << endl;
    
    cout << "Sum: " << sum << endl;
    
    cout << "Average: " << average << endl;
}
