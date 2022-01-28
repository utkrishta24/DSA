#include <iostream>
using namespace std;
void subs(string st,string curr,int i )
{
       if(i==st.length())
       {
         cout<<curr<<" ";
         return;
       }
       subs(st,curr,i+1);
       subs(st,curr+st[i],i+1);

}
int main()
{
       int n;
       cin>>n;
       char st[n];
       cin>>st;
       subs(st,"",0);

}