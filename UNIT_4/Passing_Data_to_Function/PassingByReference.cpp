#include<iostream>
using namespace std;

void swap(int &m, int &n);

int main(){
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swap(a, b);

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    return 0;
}

void swap(int &m, int &n){
    int temp;
    
    temp = m;
    m = n;
    n = temp;
}