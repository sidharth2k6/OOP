#include<iostream>
using namespace std;

int main(){
    int n = 0, a;
    int sum = 0;

    cout << "enter five numbers: ";

    do{
        cin >> a;
        sum = sum + a;
        n++;
    }while(n < 5);

    cout << "Average of the numbers is " << (sum / n);
    
    return 0;
}