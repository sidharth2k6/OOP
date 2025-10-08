#include<iostream>
using namespace std;

void printline();
void printline(char ch);
void printline(char ch, int n);

int main(){

    printline();
    printline('*');
    printline('*', 20);

    return 0;
}

void printline(){
    for(int i = 0; i < 25; i++){
        cout << "-";
    }
    cout << endl;
}

void printline(char ch){
    for(int i = 0; i < 25; i++){
        cout << ch;
    }
    cout << endl;
}

void printline(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
    cout << endl;
}