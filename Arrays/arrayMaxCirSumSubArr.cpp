#include <bits/stdc++.h>
using namespace std;
// naive O(n2)
//  int maxCirSumSub(int arr[], int n){
//     int res=arr[0];
//     for(int i=0;i<n;i++){
//         int curr_max= arr[i];
//         int curr_sum= arr[i];
//         for(int j=1;j<n;j++){
//             int index = (i+j)%n;
//             curr_sum+=arr[index];
//             curr_max=max(curr_max,curr_sum);
//         }
//         res= max(res,curr_max);
//     }
//     return res;
//  }

// efficient O(n)
// idea: take max of following 2:
// 1. max sum of normal subarray(easy:L;Kadane)
// 2. max sum of circular subarray(how?) total_sum - min_sum

// standard Kadane
int normalMaxSum(int arr[], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int overallMaxSum(int arr[], int n)
{
    int max_normal = normalMaxSum(arr, n); // normal sum
    if (max_normal < 0)
        return max_normal;
    int arr_sum = 0; // circular sum
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i] // inverted max sum of inverted is min of original
    }
    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = maxCirSumSub(arr, n);
    cout << result;
    return 0;
}