#include<iostream>
using namespace std;

int main(){
    int number, fact = 1;

    cout << "enter a number ";
    cin >> number;

    for(int i = number; i > 1; i--){
        fact = fact * i;
    }

    cout << "Factorial of " << number << " is " << fact;
    
    return 0;
}