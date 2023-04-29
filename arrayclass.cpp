#include<iostream>
using namespace std;

class employee
{
    int sal;
    public:
    void salin()
    {
        cin>>sal;
    }
    void salout()
    {
        cout<<sal<<endl;

    }
};
int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        e[i].salin();
       // e[i].salout();
    }
     for(int i=0;i<5;i++)
     {
        e[i].salout();

     }
    return 0;
}