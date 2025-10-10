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

    void display();
    void getdata();

    int operator < (Distance d1){
        if(feet < d1.feet){
            return 1;
        }
        else if((feet == d1.feet) && (inches < d1.inches)){
            return 1;
        }
        else{
            return 0;
        }
    }
};

void Distance :: display(){
    cout << feet << "ft " << inches << "inches";
}
void Distance :: getdata(){
    cout << "Enter distance in feet and inches: ";
    cin >> feet >> inches;
}

int main(){
    Distance d1, d2;

    d1.getdata();
    d2.getdata();

    if(d1 < d2){
        d1.display();
        cout << " is smaller";
    }
    else{
        d2.display();
        cout << " is smaller";
    }
    return 0;
}