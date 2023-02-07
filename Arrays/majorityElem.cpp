#include <bits/stdc++.h>
using namespace std;
// naive O(n2)
//  int majElem(int arr[], int n){
//      for(int i=0;i<n;i++){
//          int count=1;
//          for(int j=i+1;j<n;j++){
//              if(arr[i]==arr[j])
//              count++;
//          }
//          if(count>n/2)
//          return i;
//      }
//      return -1;
//  }

// efficient O(n) A.S. O(1) Mooray's Voting algo
// works in 2 phases : first finds candidate, second checks if canditate found is majority or not
int majElem(int arr[], int n)
{
    // first
    int res = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    // second
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[res] == arr[i])
            count++;
    if (count <= n / 2)
        res = -1;
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = majElem(arr, n);
    cout << result;
    return 0;
}