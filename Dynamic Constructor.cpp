#include<iostream>
using namespace std;
class Number
{
    int *ptr;
public:
    Number(int value)
    {
        ptr = new int;
        *ptr = value;
    }
    void display()
    {
        cout<<"value =  "<<*ptr<<endl;
    }
    ~Number()
    {
        delete ptr;
    }
};
int main()
{
    Number n(100);
    n.display();
    return 0;
}
