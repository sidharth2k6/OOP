#include<iostream>
using namespace std;

int main(){
    int a[10], num;
    int i, flag = 0;

    cout << "Plese enter the numbers for the array" << endl;
    for(i = 0; i < 10; i++){
        cin >> a[i];
    }
    cout << "Enter the number to be searched: ";
    cin >> num;

    for(i = 0; i < 100; i++){
        if(a[i] == num){
            cout << num << " is found. At position " << i + 1;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << num << " not found! ";
    }
    return 0;
}