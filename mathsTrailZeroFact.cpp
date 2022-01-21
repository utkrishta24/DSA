//naive
// #include <iostream>
// using namespace std;

// int fact(int n){
  
//   if(n<=0)
//   return 1;
//   return n*fact(n-1);
// }

// int zero(int facto){
//     int count=0;
//     while(facto%10==0){
//         count++;
//         facto/=10;
//     }
//     return count;
// }

// int main(){
// int n;
// cin>>n;
// cout<<zero(fact(n));
// return 0;
// }

//efficient

#include <iostream>
using namespace std;

int zero(int n){
    int count=0;
    for(int i=5;i<=n;i*=5)
        count=count+(n/i);
    return count;
}

int main(){
int n;
cin>>n;
cout<<zero(n);
return 0;
}