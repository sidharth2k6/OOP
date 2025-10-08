#include<iostream>
using namespace std;

int x;
void f1();
void f2();

int main(){
    x = x + 2;
    f1();
    f2();
    cout << x;

    return 0;
}

void f1(){
    int x;
    x = x * 2;
}

void f2(){
    x++;
}