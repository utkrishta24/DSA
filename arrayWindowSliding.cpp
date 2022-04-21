#include <bits/stdc++.h>
using namespace std;

// Maximum Sum of K Consecutive elements

// naive O((n-k)*k)
//  int maxSum(int arr[], int n, int k){
//      int max_sum = INT_MIN;
//      for(int i=;i+k-1<n;i++){
//          int sum=0;
//          for(int j=0;j<k;j++)
//              sum+=arr[i+j];
//          max_sum=max(sum,max_sum);
//      }
//      return max_sum;
//  }

// efficient //window sliding //O(n)
int maxSum(int arr[], int n, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
    int max_sum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum = curr_sum + (arr[i] - arr[i - k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

// Find subarray with given sum //non-negative integers only //window sliding not work for negative
//O(n2)
bool subSum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], s[0];
    for (int e = 1; e < n; e++)
    {
        // clean the previous window
        while (curr_sum > sum && s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == sum)
            return true;
        if (e < n)
            curr_sum += arr[e];
    }
    return (curr_sum == sum);
}


//Count distinct elements in every window of size k
//hashing!!!!




//N-bonacci numbers 
//Fi-bonacci is 2-bonacci
//O(M*N)
int nbonacci(int N, int M){
    


}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k, sum,N,M;
    cin >> k;
    cin>>sum;
    cin>>N>>M;

    res = maxSum(arr, n, k);
    res2 = subSum(arr, n, sum);
    res3 = nbonacci(N,M);
    cout << res << res2;
    return 0;
}