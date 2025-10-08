#include<iostream>
using namespace std;

int fact(int);  // function declaration

int main(){
    int n, r, ncr;

    cout << "enter n ";
    cin >> n;
    cout << "enter r ";
    cin >> r;

    ncr = fact(n)/(fact(r) * fact(n-r));
    cout << "NCR = " << ncr;
    return 0;
}

int fact(int number){   // function definition
    int f = 1;
    
    for(int i = number; i > 1; i--){
        f = f * i;
    }

    return f;   // return computed value
}