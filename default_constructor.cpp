#include<iostream>
using namespace std;
class complex{
    int a,b;
   public:
   complex()
   {
    a=69;
    b=69;
   }
   void sum()
   {
    cout<<a<<"+i"<<b<<endl;
   }
};
int main()
{
    complex c;
    c.sum();
    return 0;
}