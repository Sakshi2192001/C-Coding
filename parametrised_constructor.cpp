#include<iostream>
using namespace std;
class multi
{
  int a,b,c;
  public:
  multi(int x,int y,int z )
  {
a=x;
b=y;
c=z;
  }
  void disp()
  {
    cout<<"multiplication="<<(a*b*c)<<endl;
  }
};
int main()
{
    multi m(2,3,4);
    m.disp();
    multi n=multi(5,6,1);
    n.disp();
    return 0;
}