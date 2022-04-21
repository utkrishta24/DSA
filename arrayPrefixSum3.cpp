// Maximum Occuring Element 
//given N ranges, find the max appearing element in their range
#include <bits/stdc++.h>
using namespace std;


//naive //hash table //O(N*m)


//efficient





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
