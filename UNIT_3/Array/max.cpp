#include<iostream>
using namespace std;

int main(){
    int max = 0, a[50];

    for(int i = 0; i < 50; i++){
        cin >> a[i];

        if(a[i] > max)
            max = a[i];
    }

    cout << "Largest number in the array is " << max;
    
    return 0;
}