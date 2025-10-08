#include<iostream>
using namespace std;

int main(){
    int a[2][3], b[2][3], c[2][3];
    int i, j;

    cout << "Enter the elements for the first 2X3 matrix " << endl;

    for(i = 0; i < 2; i++)
    for(j = 0; j < 3; j++){
        cin >> a[i][j];
    }
    
    cout << "Enter the elements for the second 2X3 matix" << endl;
    
    for(i = 0; i < 2; i++)
    for(j = 0; j < 3; j++){
        cin >> b[i][j];

        c[i][j] = a[i][j] + b[i][j];
    }

    cout << "The resultant matrix is " << endl;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}