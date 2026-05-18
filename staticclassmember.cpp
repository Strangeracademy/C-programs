#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
public:
    void getData(int);
    void getcount();
};
void item :: getData(int a){
    number = ++count;
}
void item :: getcount(){
    cout<<"count: "<<count<<endl;
}
int item :: count;
int main(){
    item a, b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getData(100);
    b.getData(200);
    c.getData(300);
    cout<<"RESULT: "<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}


