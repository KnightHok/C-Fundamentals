// includes input/output libraries
#include <iostream>

using namespace std;

int main() {
    // variable declaration
    int favorite_number;
    
    // << - stream insertion operator, output stream displayed to the console
    cout << "Enter your favorite number between 1 and 100:";
    
    // >> - stream extraction operator, from console to variable
    cin >> favorite_number;
    
    
    cout << "Amazing that's my favorite number too!" << endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;
    return 0;
}
/*
 * - preprocessor does not understand C++, it follows the preprocessor paths and gets the source code ready for the compliler
 * - the compiler understands C++
 * - :: - scope resolution operator
 * - cout
 *      standard output stream
 *      console
 * - cin
 *      standard input stream
 *      keyboard
 * - << 
 *      insertion operator
 *      output streams
 * - >> 
 *      extraction operator
 *      input streams
 * */