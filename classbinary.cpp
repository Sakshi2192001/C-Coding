#include<iostream>
#include<string>
using namespace std;
class binary
{
   string s;
   public:
   void in()
   {
    cin>>s;
   }
   void find()
   {
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0'&&s[i]!='1')
        {
            cout<<"not"<<endl;
           // exit(0);
           break;

        }
    }
   }
   void ones()
   {
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
    cout<<s<<endl;
   }
};

int main()
{
    binary b;
    b.in();
  // b.ones();
    b.find();
     b.ones();
    return 0;
}