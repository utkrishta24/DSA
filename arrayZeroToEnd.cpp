//naive
// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++)
//  cin>>arr[i];
//  for(int i=0;i<n;i++){
//      if(arr[i]==0){
//          for(int j=i+1;j<n;j++){
//              if(arr[j]!=0)
//              {
//                  swap(arr[j],arr[i]);
//                  break;
//              }
//          }
//      }
//  }
//  for(int i=0;i<n;i++)
//  cout<<arr[i]<<" ";
//  return 0;
// }

//efficient 
#include<iostream>
using namespace std;
int main(){
 int n,count=0;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 cin>>arr[i];
 for(int i=0;i<n;i++){
     if(arr[i]!=0){
         swap(arr[i],arr[count]);
         count++;
     }
 }
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 return 0;
 }