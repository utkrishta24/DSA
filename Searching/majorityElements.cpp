#include<bits/stdc++.h>
using namespace std;

//should appear more than n/2 times

//naive O(n2)
int majority(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i=1; j < n; j++)
            if (arr[i]==arr[j])
                count++;
        if (count>n/2)
            return i;
        
    }
    return -1;
}

//efficient Moore's Voting Algo
//O(n)
int majority(int arr[], int n){
    //find a candidate
    int res=0,count=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    //check if the candidate is actually a majority
    count=0;
    for (int i = 0; i < n; i++)
        if(arr[res]==arr[i])
            count++;
    if(count<=n/2)
        res=-1;
    return res;
}


int main()
{
    
 return 0;
}
