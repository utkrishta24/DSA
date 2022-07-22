#include <bits/stdc++.h>
using namespace std;

// based on selection sort
// not linear sorting like selection
// uses max heap data structure
// form max heap in logn time and swap last element with root of tree then heapify

void maxHeapify(int arr[], int n, int i)
{
    // find largest of three node and its children
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
        maxHeapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {10, 15, 50, 4, 20};
    int n = 5;
    heapSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// step 1: build a max heap
// step 2: repeatedly swap root with last node, reduce heap size by one and heapify

// improvement of selection sort
// O(nlogn) best TC for any comparision based sorting
// takes O(nlogn) in all cases
// in practice quick and merge takes less time so used more
// hybrid sort algo like intro uses heap sort, in general uses quick but when depth of recursion increases uses heap
