#include <iostream>

using namespace std;

int main() {
    // init small and large rooms
    int smallRooms;
    int largeRooms;
    
    // init room prices and tax rate
    int priceSRoom{25};
    int priceLRoom{35};
    double tax_rate = 0.06; // 6%
    
    // ask the user for the amount of rooms they want cleaned
    cout << "Enter the number of small and large rooms you want cleaned (separate by space): ";
    cin >> smallRooms >> largeRooms;
    
    int cost = ((smallRooms * priceSRoom) + (largeRooms * priceLRoom));
    double tax = cost * tax_rate;
    int totalAmount = tax + cost;
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << smallRooms << endl;
    cout << "Number of large rooms: " << largeRooms << endl;
    cout << "Price per small room: $" << priceSRoom << endl;
    cout << "Price per large room: $" << priceLRoom << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "======================================" << endl;
    cout << "Total estimate: $" << totalAmount << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    
}
