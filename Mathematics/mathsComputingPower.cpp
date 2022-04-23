//naive 0(n)
// #include<bits/stdc++.h> 
// using namespace std;
// void power(int x,int n){
// int res=1;
// for(int i=0;i<n;i++)
// res=res*x;
// cout<<res;
// }

// int main(){
//     int n,x; //n^x
//     cin>>x>>n;
//     power(x,n);
//     return 0;
// }

//efficient T(n)=T(floor(n/2) + 0(1))
// height 0(logn)
//TC: 0(logn)
// #include<bits/stdc++.h> 
// using namespace std;
// void power(int x,int n){
// if(x==0)
// return 1;
// int temp=power(n,x/2);
// temp=temp*temp;
// if(x%2==0)
// return temp;
// else
// return temp*n;
// }

// int main(){
//     int n,x; //n^x
//     cin>>x>>n;
//     power(x,n);
//     return 0;
// }

//itertive power (Binary Exponentation)
//every no. can be written as sum of power of 2(set  bits in binaru rep.)
//we can traverse through all bits of a number(LSB to MSB) in O(logn) time
//TC: 0(logn)
//AS: O(1) better than recursive

#include<bits/stdc++.h> 
using namespace std;

void power(int x,int n){ //,int m under some modulo
    int res=1;
    while(n>0){
        if(n%2!=0) //if(n&1) //check odd or not
            res=res*x;  //%m
        x=x*x;          //%m
        n=n/2;  //n=n>>1;
    }
    cout<<res;
}

int main(){
    int x,n; //x^n
    cin>>x>>n;
    power(x,n);
    return 0;
}

//!!!generate bits if no.
// while(n>0){
//     if(n%2!=0)
//     //bit is 1
//     else
//     //bit is 0
//     n=n/2;
//     x=x*x;
// }