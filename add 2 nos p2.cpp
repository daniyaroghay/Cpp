#include <iostream>
using namespace std;

int add_num(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int result1, result2;
    
    result1 = add_num(3, 6);
    cout << "3 and 6 equals " << result1 << endl;
    
    result2 = add_num(2, 4);
    cout << "2 an 4 equals " << result2;
    
    return 0;
}