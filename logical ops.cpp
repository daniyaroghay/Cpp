#include <iostream>
using namespace std;
int main() {
    int a = 4, b = 2;
    
    //0 = false, 1 = true.
    cout << "The value of AND operator ((a > b) && (a == 0)) is: " << ((a>b) && (a==0)) << endl;
    cout << "The value of OR operator a ((a > b) || (a < 0)) is: " << ((a>b) || (a<0)) << endl;
    cout << "The value of NOT operator !(a > b) is: " << !(a>b) << endl;
  
    return 0;
}