//naive O(n^2)
// #include<bits/stdc++.h>
// using namespace std;

//  int main(){
//     int n,count;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     for(int i=0;i<n;i++){
//         count =0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j])
//             count++;
//         }
//         if(count%2!=0)
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//efficient 0(n)

#include<bits/stdc++.h>
using namespace std;

void findOdd(int arr[],int n){
int x=0,res1=0,res2=0; //x^0=x
for(int i=0;i<n;i++)
x=x^arr[i];
int set=x&~(x-1);//rightmost set bit
for(int i=0;i<n;i++){
    if((arr[i]&set)!=0)
    res1=res1^arr[i];
    else
    res2=res2^arr[i];
}
cout<<res1<<" "<<res2;
}

int main(){
    int n,count;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    findOdd(arr,n);
return 0;
}