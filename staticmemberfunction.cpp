#include<iostream>
using namespace std;

class test {
    int code;
    static int count;

public:
    void setcode() {
        code = ++count;
    }

    void showcode() {
        cout << "Object number: " << code << "\n";
    }

    static void showcount() {
        cout << "count: " << count << "\n";
    }
};

int test::count = 0;

int main() {
    test t1, t2, t3;

    t1.setcode();
    t2.setcode();

    t1.showcode();
    t2.showcode();

    test::showcount();

    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}
