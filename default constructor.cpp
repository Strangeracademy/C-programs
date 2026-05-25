#include<iostream>
using namespace std;
class Rectangle
{
    int len, bred;
public:
    Rectangle()
    {
        cout<<"Default Constructor invoked: ";
        len = 10;
        bred = 20;
    }
    void area();
};
void Rectangle::area()
{
    cout<<"Area is: "<<len*bred;
}
int main()
{
    Rectangle R1;
    R1.area();
    return 0;
}

