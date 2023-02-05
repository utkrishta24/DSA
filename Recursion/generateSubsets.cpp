#include <iostream>
using namespace std;
//count no. of subsets with given sum
//0(2^n)
//naive
int sumSub(int arr[], int n, int sum)
{   if(n==0)
        return (sum==0)?1:0;
    
    return sumSub(arr,n-1,sum)+
           sumSub(arr,n-1,sum-arr[n-1]);
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
