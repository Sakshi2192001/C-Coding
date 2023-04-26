#include<iostream>
using namespace std;
int count=0;
class con
{
  public:
  con()
  {
    count++;
    cout<<"constructor called for object no."<<count<<endl;
  }
  ~con()
  {
    cout<<"destructor called for object no."<<count<<endl;
    count--;
  }

};
int main()
{
    cout<<"inside main"<<endl;
    cout<<"creating two object"<<endl;
    con c1,c2;
    {
        cout<<"inside block"<<endl;
        con c3,c4;
        {
            con c5,c6;
        }
        cout<<"exiting block"<<endl;

    }
    cout<<"back to main"<<endl;
    return 0;
}