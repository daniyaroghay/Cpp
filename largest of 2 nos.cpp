#include <iostream>
using namespace std;

int main() {
    
    char op;
    int a, b;
    
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    
    if(a>b) {
        cout << a << " is greater than " << b;
    }
    else if(b>a) {
        cout << b << " is greater than " << a;
    }
    else {
        cout << a << " and " << b << " are equal";
    }
    
    return 0;
}