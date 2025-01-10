#include <iostream>
using namespace std;

int main() {
    
    int a = 1, b = 2, c = 3;
    
    if(a>b && a>c) {
        cout << a << " is the largest " << b;
    }
    else if(b>a && b>c) {
        cout << b << " is the largest " << a;
    }
    else {
        cout << c << " is the largest";
    }
    
    return 0;
}