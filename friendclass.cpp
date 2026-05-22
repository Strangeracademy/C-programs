#include<iostream>
using namespace std;
class class2;
class class1{
    int a;
public:
    void setData();
    friend class class2;
};
void class1::setData(){
    cout<<"Enter a no: ";
    cin>>a;
}
class class2{
    int b;
public:
    void setData();
    void addData(class1 o);
};
void class2::setData()
{
    cout<<"Enter a no: ";
    cin>>b;
}
void class2::addData(class1 o){
    int sum;
    sum=b+o.a;
    cout<<"sum is "<<sum;
}
int main(){
    class1 oo;
    class2 tt;
    oo.setData();
    tt.setData();
    tt.addData(oo);
    return 0;
}
