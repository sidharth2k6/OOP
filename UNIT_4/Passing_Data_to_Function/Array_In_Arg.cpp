#include<iostream>
using namespace std;

void display(int arr[3][4]);

int main(){
    int matrix1[3][4], matrix2[3][4], sum[3][4];
    int i, j;

    cout << "Enter the elements of matrix one" << endl;
    for(i = 0; i < 3; i++)
    for(j = 0; j < 4; j++){
        cin >> matrix1[i][j];
    }
    
    cout << "Enter the elements of matrix two" << endl;
    for(i = 0; i < 3; i++)
    for(j = 0; j < 4; j++){
        cin >> matrix2[i][j];
        
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    cout << "Sum is: " << endl;
    display(sum);

    return 0;
}

void display(int arr[3][4]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}