#include <bits/stdc++.h>
using namespace std;

// naive
//  void maxProfit(int arr[],int start, int end){
//      if(end<=start)
//      return 0;
//      int profit=0;
//      for(int i=start; i<end ; i++)
//      {
//          for(int j=i+1;j<=end;j++){
//              if(arr[j]>arr[i]){
//                  int c_profit= arr[j]-arr[i]+ maxProfit(arr,start,i-1)+
//                  maxProfit(arr,j+1,end);
//              profit= max(profit,c_profit);
//              }
//          }
//      }
//      cout<<profit;
//  }

// efficient
void maxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    cout << profit;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0i < n; i++)
        cin >> arr[i];
    // maxProfit(arr,0,n-1);
    maxProfit(arr, n);
}