#include<iostream>
using namespace std;
class multi
{
  int a;
  public:
  int b;
  void set1(int n,int m)
  {
    a=n;
    b=m;
  }
 // multi(){}
  int getin()
  {
    return a;
  }
  int getout()
  {
    return b;
  }
};
class calc : public multi{
   public:
   int c;
   void process()
   {
    c=getin()*b;
   }
   void set()
   {
    cout<<"value of c is "<<c<<endl;
   }
};
int main()
{
 calc d;
 d.set1(22,55);
 d.process();
 d.set();
 return 0;   
}