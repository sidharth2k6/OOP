#include<iostream>
using namespace std;

class Counter {
private:
    unsigned int count;
public:
    Counter() {
        count = 0;
    }
    Counter(int c) {
        count = c;
    }

    int getcount() {
        return count;
    }

    // Prefix increment
    Counter operator ++() {
        ++count;
        return Counter(count);
    }

    // Postfix increment
    Counter operator ++(int) {
        count++;
        return Counter(count);
    }
};

int main() {
    Counter c1, c2;
    c1++;   // postfix
    c2 = ++c1;   // prefix

    cout << c1.getcount() << endl;
    cout << c2.getcount();
    return 0;
}
