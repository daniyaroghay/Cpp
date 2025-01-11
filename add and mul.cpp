#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    int sum, product;
    
    sum = add(4, 5);
    product = mul(4, 5);
    cout << "Sum = " << sum << endl;
    cout << "Product = " <<  product;
    
    return 0;
}