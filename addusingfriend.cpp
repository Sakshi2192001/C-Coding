#include <iostream>
using namespace std;

class add
{
    int a, b;
    friend add sumtot(add o1, add o2);     //public or private both

public:
    void set(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void dis()
    {
        cout << "sum is" << a + b << endl;
    }
};
add sumtot(add o1, add o2)
{
    add o3;
    o3.set(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    add c, d, e;
    c.set(2, 4);
    c.dis();
    d.set(-2, -5);
    d.dis();
    e = sumtot(c, d);
    e.dis();
    return 0;
}