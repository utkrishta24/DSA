#include<bits/stdc++.h>
using namespace std;

//array size n>=2
//only one elem repeats
//all elem from 0 to max are present
// 0<=max<=n-2

//constraints
//no modification of array
//O(n)
//AS O(1)


//super naive O(n2) AS O(1)
for (int  i = 0; i < n-1; i++)
    for (int  j = i+1; j < n; j++)
        if(arr[i]==arr[j])
            return arr[i]


//naive O(nlogn) AS O(1)
//sort array
for (int  i = 0; i < n-1; i++)
        if(arr[i]==arr[i+1])
            return arr[i]


//efficient O(n) AS O(n)
//create a boolean arrray of size n
visited[]= {F,F,F,F,F,F...}
for (int  i = 0; i < n; i++)
    {
        if(visited[arr[i]])
            return arr[i]
        visited[arr[i]]=true;
    }

//O(n) AS O(1)
//all elem from 1 to max are present
// 1<=max<=n-1
//traverse from L to R 
//use array elm as index
//form chain in this chain always froms a cycle where repeating is always first elements
//algo used:   TWO STEP PROBLEM
//1st phase:
//fast will enter the loop before slow(or at sm time)
//in every iteration, distance increases by 1
//2nd phase:
//before first meeting
// fast distance =2 * (slow distance)
//m+x+c*i=c*(i-2j)
// m+x is multiple of c
//i,j- number of cycle iterations made by fast and slow respectively before they meet
int findRepeating(int arr[], int n){
    int slow =arr[0], fast=arr[0];
    //1st
    do
    {
        slow=arr[slow];
        fast=arr[arr[fast]];
    } while (slow!=fast);
    //2nd
    slow= arr[0];
    while (slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}

//for original constaints
int findRepeating(int arr[], int n){
    int slow =arr[0]+1, fast=arr[0]+1;
    //1st
    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    } while (slow!=fast);
    //2nd
    slow= arr[0]+1;
    while (slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return slow-1;
}
//why we increase slow and fast by 1
//self loops and loops of 0 and 1 
int main()
{
    
 return 0;
}
