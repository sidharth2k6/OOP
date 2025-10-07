#include<iostream>
using namespace std;

int main(){
    char pos;
    int x = 15, y = 15;

    cout << "You are currently located at " << x << " " << y << endl;

    cout << "Please choose the letter l for left, r for right, u for up, and d for down" << endl;
    cin >> pos;

    switch(pos){
        case 'l':
            x--;
            break;
        case 'r':
            x++;
            break;
        case 'u':
            y++;
            break;
        case 'd':
            y--;
            break;
        default:
            cout << "You selected a wrong option!";
    }

    cout << "You are now located at " << x << " " << y;
    
    return 0;
}