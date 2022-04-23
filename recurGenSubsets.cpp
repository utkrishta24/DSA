#include <iostream>
using namespace std;
//count no. of subsets with given sum
//0(2^n)
//naive
int sumSub(int arr[], int n, int sum)
{
    return 
}

int main()
{
    int n,sum;
    cin >> n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res=sumSub(arr,n,sum);
    cout<<res;
    return 0;
}
