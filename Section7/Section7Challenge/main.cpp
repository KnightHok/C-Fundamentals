#include <iostream>
#include <vector>

using namespace std;

int main() {
    // init both vectors
    vector <int> vector1;
    vector <int> vector2;
    
    // append to both values to vector1
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "first value: " << vector1.at(0) << endl;
    cout << "second value: " << vector1.at(1) << endl;
    cout << "size: " << vector1.size() << endl;
    
    // append to both values to vector2
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nfirst value: " << vector2.at(0) << endl;
    cout << "second value: " << vector2.at(1) << endl;
    cout << "size: " << vector2.size() << endl;
    
    // init 2d array of type vector<int> named vector_2d
    vector <vector<int>> vector_2d;
    
    // append vector1 and vector2 to the end of vector_2d
    vector_2d.push_back(vector1);
    vector_2d.push_back(vecto);
    
    cout << "\nDisplaying vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    // seting vector1[0] to 1000
    vector1.at(0) = 1000;
    
    cout << "\nDisplaying vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << "\nDisplaying vector1" << endl;
    cout << vector1.at(0) << " " << vector1.at(1) << endl;
    
    
    
    
    
    
    
    return 0;
    
}
