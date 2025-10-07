#include<iostream>
using namespace std;

int main(){
    int number;
    int prime;

    cout << "Enter a number: ";
    cin >> number;

    for(int i = 2; i <= number; i++){
        prime = 0;
        
        for(int j = 2; j <= i/2; j++){
            if((i % j) == 0){
                prime = 1;
                break;
            }
        }
        
        if(prime == 0)
            cout << ' ' << i << endl;
    }
    return 0;
}