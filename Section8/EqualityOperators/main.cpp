#include <iostream>

using namespace std;

int main() {
    bool equal_result{false};
    bool not_equal_result;
    
    int num1{}, num2{};
    
    // ask user for 2 inputs
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    //
    
    char char1{}, char2{};
    cout << "Eneter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    //
    
    double double1{}, double2{};
    cout << "Eneter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    //
    
    int num1;
    double num2{};
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
}
