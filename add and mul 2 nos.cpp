#include <iostream>
using namespace std;

int add_num(int n1, int n2) {
    return n1 + n2;
}

int mul_num(int n1, int n2) {
    return n1 * n2;
}

int main() {
    int sum, product;
    
    sum = add_num(5, 4);
    product = mul_num(5, 4);
    
    cout << "Sum: " << sum << endl << "Product: " << product;
}