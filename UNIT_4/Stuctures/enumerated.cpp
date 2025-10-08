#include<iostream>
using namespace std;

enum weekday {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main(){
    weekday day1, day2;

    day1 = Mon;
    day2 = Fri;

    int diff = day2 - day1;

    cout << "Days between: " << diff << endl;
    
    if(day1 < day2){
        cout << "day1 comes before day2";
    }
    return 0;
}