#include<iostream>
using namespace std;

int main(){
    int n = 0, a;
    int sum = 0;

    cout << "enter five numbers: ";

    while(n < 5){
        cin >> a;
        sum = sum + a;
        n++;
    }

    cout << "Average of the numbers is " << (sum / n);
    return 0;
}