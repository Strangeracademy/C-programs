#include<iostream>
using namespace std;
class Rectangle
{
    int len, bred;
public:
    Rectangle()
    {
        cout<<"Default constructor "<<endl;
        len = 0;
         bred = 0;
    }
    Rectangle(int l, int b)
    {
        cout<<"Parameterized constructor "<<endl;
        len = l;
        bred = b;
    }
    Rectangle(Rectangle &r)
    {
        cout<<"Copy constructor "<<endl;
        len = r.len;
        bred = r.bred;
    }
    void area();
};
void Rectangle::area(){
    int result;
    result = len*bred;
    cout<<"area is : "<<result<<endl;
}
int main()
{
    Rectangle R1;
    cout<<"Area of first rectangle "<<endl;
    R1.area();
    Rectangle R2(5, 6);
    cout<<"Area of 2nd rectangle"<<endl;
    R2.area();
    Rectangle R3(R2);
    cout<<"Area of 3rd rectangle";
    R3.area();
    return 0;
}
