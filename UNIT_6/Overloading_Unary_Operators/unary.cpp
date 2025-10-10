#include<iostream>
using namespace std;

class Counter {
private:
    unsigned int count;
public:
    Counter() {
        count = 0;
    }

    int getcount() {
        return count;
    }

    // Prefix increment
    void operator ++() {
        ++count;
    }

    // Postfix increment
    void operator ++(int) {
        count++;
    }
};

int main() {
    Counter c1;
    c1++;   // postfix
    ++c1;   // prefix

    cout << c1.getcount();
    return 0;
}
