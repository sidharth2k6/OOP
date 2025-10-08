#include<iostream>
using namespace std;

int main(){
    int x, y;
    char choice = 'y';

    do{
        cout << "Please enter the dividend: ";
        cin >> x;
        cout << "Please enter the divisor: ";
        cin >> y;
        
        if(y == 0){
            cout << "error!! Division by zero, try again";
            continue;
        }
        
        cout << "The quotient is "<< (x/y) << endl;;
        cout << "The remainder is " << (x%y) << endl;
        cout << "Do u wish to continue ";
        cin >> choice;
    }while(choice == 'y');
    return 0;
}