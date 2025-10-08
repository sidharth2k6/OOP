#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Please enter three numbers: ";
    cin >> a >> b >> c;

    if((a > b) && (b > c))
        cout << a << " is the largest number";
    else if((b > a) && (b > c))
        cout << b << " is the largest number";
    else if((c > a) && (c > b))
        cout << c << " is the largest number";
    return 0;
}