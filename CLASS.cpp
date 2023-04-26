#include<iostream>
using namespace std;

class student{
public:
string name;
int age;

void print(){
    cout<<name<<endl;
    cout<<age;
}

};
int main()
{
    student a;
    a.name="bittu";
    a.age=21;
    student b;
    b.name="sunabh";
    b.age=19;

a.print();
return 0;
}