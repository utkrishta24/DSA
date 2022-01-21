#include <iostream>
using namespace std;

bool palindrome(int n){
  int rev=0;
  int temp=n;
  while(temp>0){
      rev=rev*10+(temp%10);
      temp/=10;
  }
  if(n==rev)
  return true;
  else
  return false;
}

int main(){
int n;
cin>>n;
if(palindrome(n))
    cout<<"YES";
else
cout<<"No";
return 0;
}