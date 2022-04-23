//iterative
// #include <iostream>
// using namespace std;

// int fact(int n){
//   int facto=1;
//   while(n>0){
//       facto*=n;
//       n--;
//   }
//   return facto;
// }

// int main(){
// int n;
// cin>>n;
// cout<<fact(n);
// return 0;
// }


//recursive
#include <iostream>
using namespace std;

int fact(int n){
  
  if(n<=0)
  return 1;
  return n*fact(n-1);
}

int main(){
int n;
cin>>n;
cout<<fact(n);
return 0;
}