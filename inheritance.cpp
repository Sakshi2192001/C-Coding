#include<iostream>
using namespace std;
class emplyoee
{
   public:
   int id;
   int salary;
   emplyoee(int x)
   {
    id=x;
    salary=11111;
   }
   emplyoee(){}
};
class programmer : emplyoee
{
  public:
  programmer(int n)
  {
    id=n;
    salary=89;
  }
  void getin()
  {
    cout<<id<<endl<<salary<<endl;
  }
};
int main()
{
    emplyoee e(34);
    cout<<e.id<<endl;
    cout<<e.salary<<endl;
    programmer p(44);
    p.getin();
    return 0;
}