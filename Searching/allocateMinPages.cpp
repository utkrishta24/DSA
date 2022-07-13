#include <bits/stdc++.h>
using namespace std;

// minimize tha maximum pages allocated
// only contiguous pages can be allocated

// k is number of students
// naive recursive solution
//  we need to choose (k-1) cuts out of (n-1)cuts shown below
// total ways: (n-1)C(k-1)
int minPages(int arr[], int n, int k){
    if(k==1)
        return sum(arr,0,n-1);
    if(n==1)
        return arr[0];
    int res=INF;
    for (int i = i; i < n; i++)
        res=min(res,max(minPages(arr.i.k-1),sum(arr,i,n-1)));
    return res;    
}
int sum(int arr[], int b, int e){
    int r=0;
    for(int i=b,i<e;i++)
        r+=arr[i];
    return r;
}

//efficient binary search
//O(n*log(sum-mx)) ~ O(n*log(sum))
int minPages(int arr[],int n, int k){
    int sum=0,mx=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx,high=sum,res=0;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(isFeasible(arr,n,k,mid)){
            res=mid; //if feasible got to the
            high=mid-1; //left half
        }else{
            low=mid+1; //else go to right
        }
    }
    return res;
}
bool isFeasible(int arr[],int n,int k, int ans){
    int req=1,sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return (req<=k);
}



int main()
{

    return 0;
}
