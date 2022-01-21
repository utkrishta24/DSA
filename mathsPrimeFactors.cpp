//naive
// #include<bits/stdc++.h>
// using namespace std;

// bool Prime(int i){
//     if(i<=1)
//     return false;
//     int j=2;
//     while(j<=sqrt(i)){
//         if(i%j==0)
//         return false;
//         j++;
//     }
//     return true;
// }

// void primeFactors(int a){  //O(n2logn)
// for(int i=2;i<a;i++){
//     if(Prime(i)){
//         int x=i;
//         while(a%x==0){
//             cout<<i<<" ";
//             x=x*i;
//         }
//     }
// }
// }

// int main(){
//     int a;
//     cin>>a;
//     primeFactors(a);    
//     return 0;
// }

//efficient 
//divisors always appear in pairs: (1,30)(2,15)(3,10)(5,6)
//let(x,y) be a pair 
//x*y=n
//if(x<=y)
//x*x<=n
//x<=sqrt(n)
//a number n can be writtem as multiplications of powers of prime factors

// #include<bits/stdc++.h>
// using namespace std;

// void primeFactors(int a){
//     if(a<=1) return ;
//     for(int i=2;i*i<=a;i++){
//         while (a%i==0)
//         {
//         cout<<i<<" ";
//         a=a/i;
//         }        
//     }
//     if(a>1)
//     cout<<a;
// }

// int main(){
//     int a;
//     cin>>a;
//     primeFactors(a);
//     return 0;
// }

//more efficient code  //TC: 0(sqrt(n)) for prime numbers
#include<bits/stdc++.h>
using namespace std;

void primeFactors(int a){
    if(a<=1) return ;
    while(a%2==0){
        cout<<"2 ";
        a=a/2;
    }
    while(a%3==0){
        cout<<"3 ";
        a=a/3;
    }
    for(int i=5;i*i<=a;i=i+6){
        while (a%i==0)
        {
        cout<<i<<" ";
        a=a/i;
        }
        while(a%(i+2)==0){
            cout<<(i+2)<<" ";
            a/=(i+2);
        }        
    }
    if(a>3)
    cout<<a;
}

int main(){
    int a;
    cin>>a;
    primeFactors(a);
    return 0;
}