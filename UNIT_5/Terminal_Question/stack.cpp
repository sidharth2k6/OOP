#include<iostream>
#include<string>
using namespace std;

#define size 100

class Stack{
private:
    int stck[size];
    int top;
public:
    Stack(){
        top = 0;
        cout << "Stack initialised" << endl;
    }
    ~Stack(){
        cout << "Stack destroyed" << endl;
    }
    void push(int i);
    int pop();
};

void Stack::push(int i){
    if(top == size){
        cout << "Stack is full";
        return;
    }

    stck[top] = i;
    top++;
}

int Stack::pop(){
    if(top == 0){
        cout << "Stack underflow";
        return 0;
    }

    top--;
    return stck[top];
}

int main(){
    Stack a, b;
    
    a.push(1);
    b.push(2);
    a.push(3);
    b.push(4);

    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << b.pop() << endl;
    cout << b.pop() << endl;
    
    return 0;
}