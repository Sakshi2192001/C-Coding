#include<iostream>
using namespace std;
class bittu
{
  int a,b,c,d;
  public:
  bittu(int x,int y,int w,int z)
  {
    a=x;b=y;c=w;d=z;
  }
  bittu(int x,int y,int w)
  {
    a=x;b=y;c=w;d=7;
  }
  bittu(int x,int y)
  {
    a=x;b=y;c=7;d=9;
  }
  bittu()
  {
    a=2;b=3;c=4;d=5;
  }
void sa(){
    cout<<a<<b<<c<<d<<endl;
}


};
int main()
{
    bittu s(55,66,44,33);
    s.sa();
    bittu r(2,33,44);                    
    r.sa();
    bittu t(22,3);
    t.sa();
    bittu u(2,3);
    u.sa();
    return 0;

}