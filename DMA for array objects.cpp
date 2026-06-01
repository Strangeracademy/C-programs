#include<iostream>
#include<conio.h>
using namespace std;
class Sample{
private:
    static int count;
public:
    Sample()
    {
        count++;
        cout<<"Object "<<count<<" created"<<endl;

    }
    ~Sample()
    {
        cout<<"object "<<count<<" destroyed"<<endl;
        count--;
    }
};
int Sample::count;
int main()
{
    Sample *ptr;
    ptr = new Sample[3];
    delete [] ptr;
    return 0;
}
