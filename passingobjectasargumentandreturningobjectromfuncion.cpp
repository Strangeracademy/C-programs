#include<iostream>
using namespace std;
class complex{
private:
    int real, imag;
public:
    void setData();
    void display();
    complex sum(complex c1, complex c2);
};
void complex::setData(){
    cout<<"Enter real and imaginary"<<endl;
    cin>>real>>imag;
}
void complex::display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}
complex complex::sum(complex c1, complex c2){
    complex c;
    c.real=c1.real+c2.real;
    c.imag=c1.imag+c2.imag;
    return c;
}
int main()
{
    complex c1, c2, c3;
    c1.setData();
    c2.setData();
    c1.display();
    c2.display();
    c3=c3.sum(c1, c2);
    cout<<"After adding: ";
    c3.display();
    return 0;


}
