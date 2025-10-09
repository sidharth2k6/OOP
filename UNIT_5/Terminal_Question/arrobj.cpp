#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    int empid;
    char name[35];
    int deptcode;
public:
    void getdata(){
        cout << "enter employee code: ";
        cin >> empid;

        cout << "enter employee name: ";
        cin >> name;

        cout << "enter department code: ";
        cin >> deptcode;
    }
};

int main(){
    int i;
    Employee obj[100];

    cout << "enter employee data" << endl;
    for(i = 0; i < 100; i++){
        obj[i].getdata();
    }

    return 0;
}