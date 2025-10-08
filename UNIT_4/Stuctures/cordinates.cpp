#include<iostream>
#include<math.h>
using namespace std;

struct point{
    int x, y;
}p1, p2;

int main(){
    int s;
    cout << "Enter the co-ordinates for first co-ordinate: ";
    cin >> p1.x >> p1.y;
    cout << "Enter the co-ordinates for second co-ordinate: ";
    cin >> p2.x >> p2.y;

    s = sqrt(((p2.y - p1.y) * (p2.y = p1.y)) + ((p2.x = p1.x) * (p2.x - p1.x)));

    cout << endl << "The distance between the two points is " << s;
    return 0;
}