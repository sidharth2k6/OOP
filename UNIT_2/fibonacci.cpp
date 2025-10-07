#include<iostream>
using namespace std;

int main(){
    int number;
    int i = 0, j = 1, k;

    cout << "Enter the upper limit of the series: ";
    cin >> number;
    cout << "The Fibonacci series till" << number << " is " << endl;

    if(number < 0){
        cout << "invalid number!";
    }
    else if(number == 0){
        cout << i;
        exit(0);
    }
    else{
        cout << i << endl << j << endl;
        k = i + j;

        do{
            cout << k << endl;
            k = i + j;
            i = j;
            j = k;
        }while(k <= number);
    }
    return 0;
}