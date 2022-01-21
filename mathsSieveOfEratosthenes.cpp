//O(n*sqrt(n))
// #include <bits/stdc++.h>
// using namespace std;

// bool Prime(int i,int a){
//     if(i<=1)
//     return false;
//     if(i==2||i==3)
//     return true;
//     if(i%2==0 || i%3==0)
//     return false;
//     int j=5;
//     while(j<=sqrt(i)){
//         if(i%j==0 || i%(j+2)==0) //this
//         return false;
//         j=j+6;
//     }
//     return true;
// }

// void primeBelowNum(int a){
//     for(int i=2;i<=a;i++){
//         if(Prime(i,a))
//         cout<<i<<" ";
//     }
// }

// int main(){
//     int a;
//     cin>>a;
//     primeBelowNum(a);
//     return 0;
// }

//sieve of eratosthenes  
//begin with 2 and mark its multiple as false
//and then 3..5...etc.

//simple implementation
// #include <bits/stdc++.h>
// using namespace std;
// void sieve(int a){
//     if(a <= 1)
// 		return;
//     vector<bool> isPrime(a+1,true);
//     for(int i=2;i*i<=a;i++){
//         if(isPrime[i]){
//             for(int j=2*i;j<=a;j=j+i)
//             isPrime[j]=false;
//         }
//     }
//     for(int i=2;i<=a;i++)
//     {
//         if(isPrime[i])
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     sieve(a);
//     return 0;
// }

//optimised implementation
//i*(i-1)
//i*(i-2)...

// #include <bits/stdc++.h>
// using namespace std;
// void sieve(int a){
//     if(a <= 1)
// 		return;
//     vector<bool> isPrime(a+1,true);
//     for(int i=2;i*i<=a;i++){
//         if(isPrime[i]){
//             for(int j=i*i;j<=a;j=j+i)
//             isPrime[j]=false;
//         }
//     }
//     for(int i=2;i<=a;i++)
//     {
//         if(isPrime[i])
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     sieve(a);
//     return 0;
// }

//sorter optimised implementation
#include <bits/stdc++.h>
using namespace std;
void sieve(int a){
    vector<bool>isPrime(a+1,true);
    for(int i=2;i<=a;i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=a;j=j+i)
            isPrime[j]=false;
        }
    }
}
int main(){
    int a;
    cin>>a;
    sieve(a);
    return 0;
}

//O (n log logn)
