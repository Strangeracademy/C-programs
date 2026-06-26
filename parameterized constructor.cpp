#include<iostream>
using namespace std;

class parent
{
    int x;
public:
    parent(int i)
    {
        x=i;
        cout<<"parent class parameterized constructor\n";
    }
};
class child : public parent
{
    int y;
public:
    child(int j) : parent(j)
    {
        y = j;
        cout<<"child class parameterized constructor\n";
    }
};
int main()
{
    child c(10);
    return 0;
}
