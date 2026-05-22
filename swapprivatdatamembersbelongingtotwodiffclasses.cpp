#include<iostream>
using namespace std;

class second;

class one
{
    int a;

public:
    void setData()
    {
        cout << "Enter a no: ";
        cin >> a;
    }

    void display()
    {
        cout << "a = " << a << endl;
    }

    friend void swap(one &o, second &s);
};

class second
{
    int b;

public:
    void setData()
    {
        cout << "Enter a no: ";
        cin >> b;
    }

    void display()
    {
        cout << "b = " << b << endl;
    }

    friend void swap(one &o, second &s);
};

void swap(one &o, second &s)
{
    int temp;

    temp = o.a;
    o.a = s.b;
    s.b = temp;
}

int main()
{
    one o;
    second s;

    o.setData();
    s.setData();

    cout << "\nBefore swapping:\n";
    o.display();
    s.display();

    swap(o, s);

    cout << "\nAfter swapping:\n";
    o.display();
    s.display();

    return 0;
}
