// Maximums of all subarrays of size k
#include <bits/stdc++.h>
using namespace std;
// naive O(n2)
void printMaxK(int arr[], int n, int k)
{
    for (int i = 0; i < n + 1; i++)
    {
        int mx = arr[i];
        for (int j = i + 1; j < i + k; j++)
        {
            mx = max(arr[j], mx);
        }
        cout << mx << " ";
    }
}
// efficient Deque Used O(n)
// deque front store max of current window
// deque size k
void printMaxKEff(int arr[], int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i < n; i++)
    {
        cout << arr[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout << arr[dq.front()] << " ";
}
int main()
{
    int arr[] = {20, 40, 30, 10, 60}, n = 5;
    int k = 3;
    printMaxKEff(arr, n, k);
    return 0;
}