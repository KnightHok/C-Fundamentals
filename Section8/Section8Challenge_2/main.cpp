#include <iostream>

using namespace std;

int main() {
    const int dollar_value{100},
        quarter_value{25},
        dime_value{10},
        nickel_value{5},
        penny_value{1};
        
        int dollar_amount{}, quartar_amount{}, dime_amount{}, nickel_amount{}, penny_amount{}, cents{};
        
        cout << "Enter an amount in cents: ";
        cin >> cents;
        
        // dollar amount
        dollar_amount = cents / dollar_value;
        cents = cents % dollar_value;
        
        // quartar amount
        quartar_amount = cents / quarter_value;
        cents = cents % quarter_value;
        
        // dime amount
        dime_amount = cents / dime_value;
        cents = cents % dime_value;
        
        // nickel amount
        nickel_amount = cents / nickel_value;
        cents = cents % nickel_value;
        
        // penny amount
        penny_amount = cents / penny_value;
        cents = cents % nickel_value;
        
        cout << "You can provide this change as follows:\n" << endl;
        
        // checker
        cout << "dollars : " << dollar_amount << endl;
        cout << "quartars : " << quartar_amount << endl;
        cout << "dimes : " << dime_amount << endl;
        cout << "nickels : " << nickel_amount << endl;
        cout << "pennys : " << penny_amount << endl;
        
        /*
         * Not every problem needs to have minimal variables
         * */
        
}
