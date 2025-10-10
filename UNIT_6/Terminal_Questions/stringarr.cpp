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

    void operator +=(String s2){
        int i, l, j;
        l = strlen(str);

        for(i = l, j = 0; s2.str[j] != '\0'; i++, j++){
            str[i] = s2.str[j];
        }
        str[i] = '\0';
    }
};

int main(){

    String s1 = "hello ", s2 = "world";
    s1 += s2;

    s1.display();
    
    return 0;
}