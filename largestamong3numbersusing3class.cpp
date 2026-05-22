#include<iostream>
using namespace std;
class classthree;
class classtwo;
class classone
{
    int a;
public:
    void setData();
    void display();
    friend void findMax(classone o, classtwo t, classthree h);
};
void classone::setData(){
    cout<<"Enter a no: ";
    cin>>a;
}
void classone::display()
{
    cout<<a<<endl;
}
class classtwo
{
    int b;
public:
    void setData();
    void display();
    friend void findMax(classone o, classtwo t, classthree h);
};
void classtwo::setData()
{
    cout<<"Enter a no: ";
    cin>>b;
}
void classtwo::display()
{
    cout<<b<<endl;
}
class classthree
{
    int c;
public:
    void setData();
    void display();
    friend void findMax(classone o, classtwo t, classthree h);
};
void classthree::setData()
{
    cout<<"Enter a no: ";
    cin>>c;
}
void classthree::display()
{
    cout<<c<<endl;
}
void findMax(classone o, classtwo t, classthree h)
{
    cout << "Max is: ";

    (o.a > t.b && o.a > h.c) ? cout << o.a :
    (t.b > o.a && t.b > h.c) ? cout << t.b :
    cout << h.c;
}
int main()
{
    classone oo;
    classtwo tt;
    classthree hh;
    oo.setData();
    tt.setData();
    hh.setData();
    oo.display();
    tt.display();
    hh.display();
    findMax(oo, tt, hh);
    return 0;
}
