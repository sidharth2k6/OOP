#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[10];
    int i, j, len;
    int flag = 0;
    
    cout << "Please enter the text to be checked: ";
    cin >> a;

    len = strlen(a);
    for(i = 0, j = len - 1; i < len/2; i++, j--){
        if(a[i] != a[j]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "The text you have entered is a Palindrome";
    }
    else{
        cout << "The text is not a Palindrome";
    }
    return 0;
}