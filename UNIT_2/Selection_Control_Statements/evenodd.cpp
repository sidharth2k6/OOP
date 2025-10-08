#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Please enter a number" << endl;
    cin >> num;

    if((num % 2) == 0)
        cout << num << " is a even number.";
    else
        cout << num << " is a odd number.";
    return 0;
}