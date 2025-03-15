// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    double temp;
    char unit;
    
    cout<<"C = Celsius\nF = Fahrenheit\nWhat unit would you like to convert to? ";
    cin >> unit;
    
    if(unit == 'f' || unit =='F'){
        cout<<"Enter the temp in celsius: ";
        cin>>temp;
        
        temp = (1.8 * temp) + 32.0;
        cout<<"Temp is " << temp <<" F";
    }
    
    else if(unit == 'c' || unit =='C'){
        cout<<"Enter the temp in fahrenheit: ";
        cin>>temp;
        
        temp = (temp - 32.0) / 1.8;
        cout<<"Temp is " << temp <<" C";
    }
    
    return 0;
}