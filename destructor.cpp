#include<iostream>
using namespace std;
int countone= 0;
class alpha
{
public:
    alpha(){
    countone++;
    cout<<"No of object created "<<countone<<endl;
    }
    ~alpha()
    {

        cout<<"No of object destroyed "<<countone--<<endl;
    }
};
int main()
{
    cout<<"Enter main "<<endl;
    {
        alpha a1, a2, a3, a4;
        {
            cout<<"Enter Block 1 "<<endl;
            alpha a5;
        }
        {
            cout<<"Enter block 2 "<<endl;
            alpha a6;
        }
        cout<<"Reenter main "<<endl;
    }
    return 0;
}
