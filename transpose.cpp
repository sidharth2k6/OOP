#include<iostream>
using namespace std;

int main(){
    int a[3][3], at[3][3];
    int i, j;

    cout << "Enter the elements for the 3x3 matrix" << endl;
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++){
        cin >> a[i][j];
        at[j][i] = a[i][j];
    }

    cout << "The Transpose is " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << at[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}