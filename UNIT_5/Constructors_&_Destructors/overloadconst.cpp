#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
    int feet;
    int inches;
public:
    Distance(int f, int i){
        feet = f;
        inches = i;
    }
    Distance(){
        feet = 0;
        inches = 0;
    }
    void display(){
        cout << feet << "ft " << inches << "inches" << endl;
    }
};

int main(){
    Distance d1, d2(10, 2);
    d1.display();
    d2.display();
    return 0;
}