// 0(n2)
// does less memory writes compared to other algos
// but cycle sort is optimal in terms of memory write
// basic idea of heapsort
// not stable
// in-place

#include <bits/stdc++.h>
using namespace std;

// naive
/*
void selectionSort(int arr[], int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min_ind=0;
        for (int j = 0; j < n; j++)
            if(arr[j]<arr[min_ind])
                min_ind=j;
        temp[i]=arr[min_ind];
        arr[min_ind]=INT_MAX;
    }
    for (int i = 0; i < n; i++)
        arr[i]=temp[i];
}
*/

// efficient
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_ind])
                min_ind = j;
        swap(arr[min_ind], arr[i]);
    }
}

int main()
{
    int arr[] = {2, 10, 8, 7};
    selectionSort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}
