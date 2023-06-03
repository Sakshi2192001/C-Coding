#include<iostream>
using namespace std;

class complex 
{
   int a,b;
   public:
   void in(int x,int y)

   {
    a=x;
    b=y;
   }
   void out()
   {
    cout<<a<<"+i"<<b<<endl;
   }
   void sum(complex s,complex p)
   {
    a=s.a+p.a;
    b=s.b+p.b;
   }
};
int main()
{
    complex c,d,e;
    c.in(1,4);
    c.out();
    d.in(2,4);
    d.out();
    e.sum(c,d);
    e.out();
    return 0;
}