//naive
// #include<bits/stdc++.h>
// using namespace std;

// void divisor(int a){
//     for(int i=1;i<=a/2;i++){
//         if(a%i==0)
//         cout<<i<<" ";
//     }
//     cout<<a;
// }

// int main(){
//     int a;
//     cin>>a;
//     divisor(a);
//     return 0;
// }


//Efficient
// #include<bits/stdc++.h>
// using namespace std;

// void divisor(int a){
//     for(int i=1;i*i<=a;i++){
//         if(a%i==0)
//         cout<<i<<" ";
//         if(i!=a/i)
//         cout<<a/i<<" ";
//     }
// }

// int main(){
//     int a;
//     cin>>a;
//     divisor(a);
//     return 0;
// }

//efficient and sorted
#include<bits/stdc++.h>
using namespace std;

void divisor(int a){
    int i;
    for(i=1;i*i<a;i++){ // 1 to root n
        if(a%i==0)
        cout<<i<<" ";
    }
    for(;i>=1;i--){     // root n to n
        if(i!=a/i)
        cout<<a/i<<" ";
    }
}

int main(){
    int a;
    cin>>a;
    divisor(a);
    return 0;
}