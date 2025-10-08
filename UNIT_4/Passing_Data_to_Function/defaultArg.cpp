#include<iostream>
using namespace std;

void printline(char ch = '*', int n = 10);

int main(){

    printline();
    printline('-');
    printline('-', 15);

    return 0;
}

void printline(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
    cout << endl;
}