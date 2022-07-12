#include<bits/stdc++.h>
using namespace std;
//sorted first then rotated
//don't know how many times rotated

//naive O(n)
int sortRotateSearch(int arr[], int x){
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;
}

//efficient binary search O(logn)
int sortRotateSearch(int arr[], int n,int x){
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x) return mid;
        if (arr[low]<arr[mid]){
            if(x>=arr[low] && x<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else{
            if(x>arr[mid] && x<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}