#include<iostream>
using namespace std;

int main(){
    int number;
    int prime = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    //check whether the number is divisible by any number from 2 to number/2
    for(int i = 2; i <= number/2; i++){
        if((number % i) == 0){
            prime = 1;
            break;
        }
    }

    if(prime == 0)
        cout << "The number is prime number";
    else
        cout << "The number is not a prime number";
    return 0;
}