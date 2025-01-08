#include <iostream>
using namespace std;

int main() {
    int num;
    
    for(int i = 1; i <= 5; ++i) {
        cout << "Enter a no: ";
        cin >> num;
        if(num < 0) {
            continue;
        }
        cout << "num is " << num << endl;    
    }
    
    return 0;
}