#include<iostream>
using namespace std;

void smallzero(int &m, int &n);     // Function declaration

int main(){
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    smallzero(a, b);

    cout << "The value of a is: " << a << endl;
    cout << "The value od b is: " << b << endl;
    return 0;
}

void smallzero(int &m, int &n){
    if(m < n)
        m = 0;
    else if(m > n)
        n = 0;
    else{
        m = 0;
        n = 0;
    }
}