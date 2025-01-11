#include <iostream>
using namespace std;

void add_num(int a, int b) {
    int sum = a + b;
    cout << "Sum = " << sum;
}

int main() {
    
    add_num(4, 6);
    
    return 0;
}