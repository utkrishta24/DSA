//Trapping Rain Water
//if increasing or decreasing no water
#include<bits/stdc++.h>
using namespace std;

//naive 0(n^2)
// void collected(int bars[],int n){
// int res=0;
// for(int i=1;i<n-1;i++){

//     int lMax=bars[i];
//     for(int j=0;j<i;j++)
//     lMax=max(lMaxmbars[j]);

//     int rMax=bars[i];
//     for(int j=i+1;j<n;j++)
//     rMax=max(rMaxmbars[j]);

//     res=res+(min(lMax,rMax)-bars[i]);
// }
// cout<<res;
// }

//efficient
void collected(int bars[],int n){
int res=0;
int lMax[n],rMax[n];

lMax[0]=bars[0];
for(int i=1;i<n;i++)
  lMax[i]=max(bars[i],lMax[i-1]);

rMax[0]=bars[n-1];
for(int i=n-2;i>=0;i--)
  rMax[i]=max(bars[i],rMax[i+1]);

for(int i=1;i<n-1;i++)
    res=res+(min(lMax[i],rMax[i])-bars[i]);
cout<<res;
}

int main(){
    int n;
    cin>>n;
    int bars[n];
    for(int i=0;i<n;i++)
    cin>>bars[i];
    collected(bars,n);
}