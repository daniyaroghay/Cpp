#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a no.: ";
    cin >> num;
    
    if(num == 0) {
        cout << "Zero";
    }
    else if(num > 0) {
        cout << "Positive number";
    }
    else {
        cout << "Negative number";
    }
    
    return 0;
}