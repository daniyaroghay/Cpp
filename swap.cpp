int main() {
    int num1 = 5, num2 = 10, temp;
    
    cout << "num1 (before swap): " << num1 << endl;
    cout << "num2 (before swap): " << num2 << endl << endl;
    
    //assign num1 to temp
    temp = num1,
    //assign num2 to num1
    num1 = num2;
    //assign initial num 1 (temp) to num2
    num2 = temp;
    
    cout << "num1 (after swap): " << num1 << endl;
    cout << "num2 (after swap): " << num2 << endl;
    
    return 0;
}