#include<bits/stdc++.h>
using namespace std;

// naive:
//O(position)
//AS: O(1)
int searchInInfinite(  int arr[], int x )
{
    int i=0;
    while (true)
    {
        if (arr[i]==x) return i;
        if (arr[i]>x) return -1;
    }
}

// efficient:
//0(log(position))
int searchInInfinite(int arr[], int x)
{
    if(arr[0]==x) return 0;
    int i=1;
    while (arr[i]<x)
        i=i*2;
    if(arr[i]==x) return i;
    return binarySearch(arr,i/2+1,i-1);
}
