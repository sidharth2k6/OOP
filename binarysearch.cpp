#include<iostream>
using namespace std;

int main(){
    int a[10], temp;
    int i, j, flag = 0;
    int start, end;
    int search, mid;

    cout << "Plese enter ten array elements" << endl;
    for(i = 0; i < 10; i++){
        cin >> a[i];
    }
    cout << "Plese enter the number to be searched: ";
    cin >> search;

    //Array Sorting
    for(j = 0; j < 9; j++){
        for(i = 0; i < 9; i++){
            if(a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    //Searching
    start = 0;
    end = 9;

    do{
        mid = (start + end)/2;
        if(a[mid] == search){
            cout << search << " found.";
            flag = 1;
            break;
        }
        if(a[mid] > search){
            end = mid;
        }
        else if(a[mid] < search){
            start = mid;
        }
    }while(start != end);

    if(flag == 0){
        cout << search << " not found!";
    }
    return 0;
}