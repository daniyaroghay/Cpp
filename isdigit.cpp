#include <cctype>
#include <iostream>
using namespace std;

int main() {
    
    char c1 = 'd';
    
    if(isdigit(c1)) {
        cout << c1 << " is a numeric character";
    }
    else {
        cout << c1 << " is a non-numeric character";
    }
    
    return 0;
}