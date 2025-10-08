#include<iostream>
#include<string.h>
using namespace std;

const char str[7] = "XYZPQR";

int main(){
    char pass[6];
    int flag = 0;

    for(int i = 0; i < 3; i++){
        cout << "please enter your password ";
        cin >> pass;

        if(strcmp(str, pass) == 0){
            cout << "Welcome";
            flag = 1;
            break;
        }
        else
            cout << "Invalid password, try again" << endl;
    }

    if(flag == 0)
        cout << "Access denied";
    return 0;
}