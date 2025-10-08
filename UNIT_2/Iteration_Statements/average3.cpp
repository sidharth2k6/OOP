#include<iostream>
using namespace std;

int main(){
    int n, a;
    int sum = 0;

    cout << "enter five numbers: ";

    for(n = 0; n < 5; n++){
        cin >> a;
        sum = sum + a;
    }

    cout << "Average of the numbers is " << (sum / n);
    return 0;
}