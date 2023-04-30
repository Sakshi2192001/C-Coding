#include<iostream>
using namespace std;

class sam
{
int a,b;
public:
sam (int y ,int x=8)     //default arguments are at the end
{
    a=x;
    b=y;
}
void print()
{
    cout<<a<<" "<<b<<endl;
}
};
int main()
{
    sam c(6);
    c.print();
    return 0;

}