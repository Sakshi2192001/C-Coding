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
};
int main()
{
    complex c;
    c.in(1,4);
    
    c.out();
    return 0;
}