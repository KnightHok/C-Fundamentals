#include <iostream>
#include <vector>

using namespace std;

int main() {
    char userInput;
    vector<int> myList;
    
    // while the user hasn't entered "q"
    while(userInput != 'Q' && userInput != 'q') {
        // ask user for command
        cout << "Enter in a command: ";
        cin >> userInput;
        
        /*
         * P - display all of the elements (ints) in the list
         * if the list is empty display "[] - list is empty"
         * */
        if(userInput == 'P' || userInput == 'p') {
            // if vector is empty
            if(myList.size() == 0) {
                cout << "[] - list is empty" << endl;
            } else {
                // print out all element in vector
                for(int i=0; i<myList.size(); i++) {
                    cout << myList.at(i) << " ";
                }
                cout << endl;
            }
            
            /*
             * A - prompt the user for an integer to add to the list
             * once added display "int added"
             * */
        } else if(userInput == 'A' || userInput == 'a') {
            int newNumToAdd{};
            cout << "Enter in the number you want to add: ";
            
            // userInput
            cin >> newNumToAdd;
            myList.push_back(newNumToAdd);
            
            // display new num
            cout << newNumToAdd << " added" << endl;
            
            /*
             * M - calculate the mean or average of the elements in the list and display it 
             * if empty display "Unable to calculate the mean - no data"
             * */
        } else if(userInput == 'M' || userInput == 'm') {
            if(myList.size() == 0) {
                cout << "Unable to calculate the main - no data" << endl;
            } else {
                // init sum
                int sum{};
                
                // add all int elements from myList into sum
                for(int i=0; i<myList.size(); i++) {
                    sum += myList.at(i);
                }
                
                // get the average of sum
                double average = (double) sum / myList.size();
                
                // print out average
                cout << "The average is " << average << endl;
            }
            
            /*
             * S - you should display the smallest element in the list
             * if empty you should display "Unalbe to determine the smallest number - list is empty"
             * */
        } else if(userInput == 'S' || userInput == 's') {
            if(myList.size() == 0) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                // init lowestInt to the first int of myList
                int lowestInt = myList.at(0);
                
                // find the lowest number in myList
                for(int i=0; i<myList.size(); i++) {
                    // if myList element is lower the int already in lowestInt
                    if(myList.at(i) < lowestInt) {
                        // set lowestInt to the myList v i
                        lowestInt = myList.at(i);
                    }
                }
                
                // display lowest int in in vector myList
                cout << "The smallest number is " << lowestInt << endl;
            }
            
            /*
             * L - you should display the largest element in the list
             * if list is empty you should display "Unable to determine the largest number - list is empty"
             * */
        } else if(userInput == 'L' || userInput == 'l') {
            if(myList.size() == 0) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                // init highestInt to the first in of myList
                int highestInt = myList.at(0);
                
                // find the highest number in vector myList
                for(int i=0; i<myList.size(); i++) {
                    // if myList element is higher then the int already in highestInt
                    if(myList.at(i) > highestInt) {
                        // set highestInt to the myList element at i
                        highestInt = myList.at(i);
                    }
                }
                // display highest int in in vector myList
                cout << "The highest number is " << highestInt << endl;
            }
        } else if(userInput == 'Q' || userInput == 'q'){
            cout << "Goodbye!" << endl;
        } else {
            cout << "Unrecognized Command" << endl;
        }
    
        
    }
    
    
    return 0;
}
