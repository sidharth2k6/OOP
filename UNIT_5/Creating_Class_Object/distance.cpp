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
};

int main(){
    Distance d1;

    d1.setdistance(10, 2);
    d1.display();
    return 0;
}