#include<iostream>
using namespace std;

struct product{
    int productcode;
    char description;
    float unitprice;
    int qtyinhand;
}p[100];

int main(){
    int i;

    for(int i = 0; i < 100; i++){
        cout << "Enter Product Code: ";
        cin >> p[i].productcode;

        cout << "Enter Product Description: ";
        cin >> p[i].description;

        cout << "Enter Unit Price: ";
        cin >> p[i].unitprice;
        
        cout << "Enter qty in hand: ";
        cin >> p[i].qtyinhand;
    }
    return 0;
}