#include <bits/stdc++.h>
using namespace std;

// O(n2)

// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i])
//                 swap(arr[j],arr[i]);
//         }
//     }
//     for (int i = 0; i < 4; i++)
//         cout<<arr[i]<<" ";
// }

/*
void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-i-1;j++){
            if(arr[j+1]<arr[j])
                swap(arr[j],arr[j+1]);
        }
    }
    for (int i = 0; i < 4; i++)
        cout<<arr[i]<<" ";
}
*/

// optimised
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = {2, 10, 8, 7};
    bubbleSort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}
