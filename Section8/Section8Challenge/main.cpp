#include <iostream>

using namespace std;

int main() {
    // init currency
    const int dollar{100},
        quarter{25},
        dime{10},
        nickel{5},
        penny{1};
        
    int cents{}, valueOutput{}, moneyRemaining{};
    
    cout << "Enter an amount in cents: ";
    cin >> cents;
    
    moneyRemaining = cents;
    
    cout << "You can provide this change as follows:\n" << endl;
    
    if(moneyRemaining / dollar != 0) {
        valueOutput = moneyRemaining / dollar;
        moneyRemaining -= (dollar * valueOutput);
    } else {
        valueOutput = 0;
    }
    cout << "dollars: " << (valueOutput) << endl;
    
    if(moneyRemaining / quarter != 0) {
        valueOutput = moneyRemaining / quarter;
        moneyRemaining -= (quarter * valueOutput);
    } else {
        valueOutput = 0;
    }
    cout << "quarters: " << (valueOutput) << endl;
    
    if(moneyRemaining / dime != 0) {
        valueOutput = moneyRemaining / dime;
        moneyRemaining -= (dime * valueOutput);
    } else {
        valueOutput = 0;
    }
    cout << "dimes: " << (valueOutput) << endl;
    
    if(moneyRemaining / nickel != 0) {
        valueOutput = moneyRemaining / nickel;
        moneyRemaining -= (nickel * valueOutput);
    } else {
        valueOutput = 0;
    }
    cout << "nickels: " << (valueOutput) << endl;
    
    if(moneyRemaining / penny != 0) {
        valueOutput = moneyRemaining / penny;
        moneyRemaining -= (penny * valueOutput);
    } else {
        valueOutput = 0;
    }
    cout << "pennies: " << (valueOutput) << endl;
    
    
    
    
    
}
