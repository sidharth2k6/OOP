#include<iostream>
using namespace std;

int carea(int radius);      // Function declaration

int main(){
    int radius;
    cout << "enter radius: ";
    cin >> radius;

    cout << "The area of circle is " << carea(radius) << endl;
    return 0;
}

int carea(int radius){
    int a;
    a = 3.14 * radius * radius;
    return a;
}