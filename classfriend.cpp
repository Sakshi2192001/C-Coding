#include<iostream>
using namespace std;

class complex;
class calc{
    public:
     void realcomplex(complex,complex);
};
class complex
{
    int a,b;
    //friend void calc::realcomplex(complex,complex);
    friend class calc;
    public:
    void set(int n1,int n2)
    {
       a=n1;
       b=n2;
    }
};
void calc :: realcomplex(complex o1,complex o2)
{
    cout<<(o1.a+o2.a)<<endl;
}
int main()
{
    complex c,d;
    calc e;

    c.set(3,4);
    d.set(5,9);
    //calc e;
    e.realcomplex(c,d);
    return 0;
}