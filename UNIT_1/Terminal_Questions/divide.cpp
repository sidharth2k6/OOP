#include<iostream>
using namespace std;

int main(){
    int a, b, q, rem;
    
    cout << "enter two numbers: ";
    cin >> a >> b;

    q = a/b;
    rem = a%b;

    cout << "Quotient = " << q << endl;
    cout << "remainder = " << rem;
    
    return 0;
}