//upto n/2

// #include<bits/stdc++.h>
// using namespace std;

// bool Prime(int a){
//     if(a<=1)
//     return false;
//     int i=2;
//     while(i<=a/2){
//         if(a%i==0)
//         return false;
//         i++;
//     }
//     return true;
// }

// int main(){
//     int a;
//     cin>>a;
//     if(Prime(a))
//     cout<<"Y";
//     else
//     cout<<"N";
//     return 0;
// }

//efficient  upto i*i<=n
// #include<bits/stdc++.h>
// using namespace std;

// bool Prime(int a){
//     if(a<=1)
//     return false;
//     int i=2;
//     while(i<=sqrt(a)){
//         if(a%i==0)
//         return false;
//         i++;
//     }
//     return true;
// }

// int main(){
//     int a;
//     cin>>a;
//     if(Prime(a))
//     cout<<"Y";
//     else
//     cout<<"N";
//     return 0;
// }

//more efficient for large numbers: by checking for %2==0 and %3==0 we can save many iterations
#include<bits/stdc++.h>
using namespace std;

bool Prime(int a){
    if(a<=1)
    return false;
    if(a==2||a==3)
    return true;
    if(a%2==0 || a%3==0)
    return false;
    int i=5;
    while(i<=sqrt(a)){
        if(a%i==0 || a%(i+2)==0) //this
        return false;
        i=i+6;
    }
    return true;
}

int main(){
    int a;
    cin>>a;
    if(Prime(a))
    cout<<"Y";
    else
    cout<<"N";
    return 0;
}