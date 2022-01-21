//iterative  

// #include <iostream>
// using namespace std;
// int length(int n){
//     int len=0;
//     while(n!=0){
// n/=10;
// len++;
// }
// return len;
// }
// int main(){
// int n,len;
// cin>>n;
// len=length(n);
// cout<<len;
// return 0;
// }

//recursive

// #include <iostream>
// using namespace std;
// int length(int n){
// if(n==0)
// return 0;
// return 1+ length(n/10);
// }
// int main(){
// int n,len;
// cin>>n;
// len=length(n);
// cout<<len;
// return 0;
// }

//logarithmic

#include <iostream>
#include<math.h>
using namespace std;
int length(int n){
return floor(log10(n)+1);
}
int main(){
int n,len;
cin>>n;
len=length(n);
cout<<len;
return 0;
}


