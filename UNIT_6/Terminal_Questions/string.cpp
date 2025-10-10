#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

class String{
private:
    char str[25];
public:
    String(){
        strcpy(str, "");
    }
    String(const char ch[]){
        strcpy(str, ch);
    }
    void display(){
        cout << str;
    }

    String operator ++ (){
        String temp;
        int i;

        for(i = 0; str[i] != '\0'; i++){
            temp.str[i] = toupper(str[i]);
        }
        temp.str[i] = '\0';
        return temp;
    }
};

int main(){

    String s1 = "hello", s2;
    s2 = ++s1;

    s2.display();
    
    return 0;
}