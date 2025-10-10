#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
    int feet;
    int inches;

public:
    
    Distance(){
        feet = 0;
        inches = 0;
    }
    Distance(int f){
        feet = f;
        inches = 0;
    }
    Distance(int f, int i){
        feet = f;
        inches = i;
    }

    void display(){
        cout << feet << "ft " << inches << "inches" << endl;
    }

    Distance operator +(Distance d1){
        int f = feet + d1.feet;
        int i = inches + d1.inches;
        return Distance(f, i);
    }
};

int main(){
    Distance d1(2, 5), d2(1, 4), d3, d4;

    d3 = d1 + d2;
    d3.display();

    d4 = d3 + d2;
    d4.display();
    return 0;
}