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

    friend Distance operator +(Distance, Distance);

};

Distance operator +(Distance d1, Distance d2){
    int f = d1.feet + d2.feet;
    int i = d1.inches + d2.inches;
    return Distance(f, i);
}

int main(){
    Distance d1(2, 5), d2;
    d2 = 10 + d1;

    d2.display();
    return 0;
}