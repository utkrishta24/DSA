// Maximum Occuring Element
// given N ranges, find the max appearing element in their range
#include <bits/stdc++.h>
using namespace std;

// naive //hash table //O(N*m)

// efficient
//  0<=L[],R[]<=1000
int maxOcc(int L[], R[], int n)
{
    vector<int> arr[1000];
    for (int i = 0; i < n; i++)
    {
        arr[L[i]]++;
        arr[R[i] + 1]--;
    }
    int maxm = arr[0], res = 0;
    for (int i = 1; i < 1000; i++)
    {
        arr[i] += arr[i - 1];
        if (maxm < arr[i])
        {
            maxm = arr[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = maxOcc(arr, n);
    cout << res;
    return 0;
}

//check if a given array can be divided into 3 parts with eqaul sum
//check if there is a subaaray with 0 sum  O(n), AS O(1)
//find the longest subaaray in binary array with equal 0s and 1s