#include<iostream>
#include<string>
using namespace std;

class Sample{
private:
    int data;
public:
    Sample(){
        data = 0;
        cout << "Constructor invoked" << endl;
    }
    ~Sample(){
        cout << "Destructor invoked";
    }
    void display(){
        cout << "Data: " << data << endl;
    }
};

int main(){
    Sample obj1;
    obj1.display();
    return 0;
}