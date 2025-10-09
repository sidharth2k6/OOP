#include<iostream>
#include<string>
using namespace std;

class A{
private:
    static int total;
    int id;
public:
    A(){
        total++;
        id = total;
    }
    ~A(){
        total--;
        cout << endl << "destroying ID number: " << id;
    }

    static void showtotal(){
        cout << endl << total;
    }
    void showid(){
        cout << endl << id;
    }
};

int A::total = 0;

int main(){
    A::showtotal();
    A a1, a2;
    A::showtotal();
    
    a1.showid();
    a2.showid();
    return 0;
}