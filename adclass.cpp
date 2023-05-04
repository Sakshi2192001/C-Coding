#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
    void init()
    {
        cin>>a>>b;

    }
    void sum()
    {
        cout<<(a+b)<<endl;
           }

};

int main()
{
    add s;
    s.init();
    s.sum();
    return 0;
}