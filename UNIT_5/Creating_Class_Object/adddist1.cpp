#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
    int feet;
    int inches;
public:
    void setdistance(int a, int b){
        feet = a;
        inches = b;
    }
    void display(){
        cout << feet << "ft " << inches << "inches";
    }
    void add(Distance dist1, Distance dist2){
        feet = dist1.feet + dist2.feet;
        inches = dist1.inches + dist2.inches;

        if(inches > 12){
            feet++;
            inches = inches - 12;
        }
    }
};

int main(){
    Distance d1, d2, d3;

    d1.setdistance(10, 2);
    d2.setdistance(2,4);

    d3.add(d1, d2);
    d3.display();

    return 0;
}