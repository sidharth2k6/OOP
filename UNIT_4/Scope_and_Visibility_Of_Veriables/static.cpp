#include<iostream>
using namespace std;

int main(){
    int num;
    char ch;

    do{
        cout << "Enter a number: ";
        cin >> num;

        f1(num);
        cout << "Do u want to enter another number: ";
        cin >> ch;
    }while(ch == 'y');
    return 0;
}

void f1(int x){
    static int sum, n;
    sum = sum + x;
    n = n + 1;
    int avg = sum / n;
    cout << "Average is " << avg << endl;
}