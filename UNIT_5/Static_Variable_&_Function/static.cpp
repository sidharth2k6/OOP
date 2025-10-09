#include<iostream>
#include<string>
using namespace std;

class A{
private:
    int a;
    static int s;
public:
    A(){
        a = 0;
        cout << "Default Constructor Invoked" << endl;
    }
    A(int i){
        a = i;
        cout << "Overloaded Constructor Invoked" << endl;
        s = s + a;
    }
    void display(){
        cout << "a = " << a << endl << "s = " << s << endl;
    }
};

int A::s = 0;

int main(){
    A obj1(12);
    obj1.display();

    A obj2(10);
    obj2.display();
    
    return 0;
}