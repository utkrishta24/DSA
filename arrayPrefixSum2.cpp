// equilibrium point
// sum of element before it=after it

#include <bits/stdc++.h>
using namespace std;

// naive  //O(n2)
//  bool isEquilPoint(int arr[],int n){
//          for(int i  = 0; i < n; i++)
//  	{
//  		int l_sum = 0, r_sum = 0;

// 		for(int j = 0; j < i; j++)
// 			l_sum += arr[j];

// 		for(int j = i + 1; j < n; j++)
// 			r_sum += arr[j];

// 		if(l_sum == r_sum)
// 			return true;
// 	}

// 	return false;
// }

// efficient O(n)
bool isEquilPoint(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	int l_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (l_sum == sum - arr[i])
			return true;
		l_sum += arr[i];
		sum -= arr[i];
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int res = isEquilPoint(arr, n);
	cout << res;
	return 0;
}
