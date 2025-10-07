#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    
    cout << "enter two numbers: ";
    cin >> num1 >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "numbers after swapping are: " << num1 << ' ' << num2;
    return 0;
}