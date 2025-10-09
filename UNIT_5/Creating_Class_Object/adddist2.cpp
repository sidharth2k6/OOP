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
    
    Distance add(Distance dist){
        Distance temp;
        temp.feet = dist.feet + feet;
        temp.inches = dist.inches + inches;

        if(temp.inches > 12){
            temp.feet++;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }
};

int main(){
    Distance d1, d2, d3;

    d1.setdistance(10, 2);
    d2.setdistance(2, 4);

    d3 = d1.add(d2);
    d3.display();
    
    return 0;
}