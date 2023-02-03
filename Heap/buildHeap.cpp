#include <bits/stdc++.h>
using namespace std;

// build heap: gievn a random array, rearrange its elements to form a min heap.
// O(n), n=size
// maximum number of nodes at height h= floor(n/(2^(h+1)))
// total time: summation (h=1 to logn){floor(n/(2^(h+1)))O(h)}
// = O{n*floor(n/(2^(h+1)))}
// = O(n)
class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[c];
    }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int lt = left(i), rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i])
            smallest = lt;
        if (rt < size && arr[rt] < arr[smallest])
            smallest = rt;
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
            minHeapify(i);
    }
};

int main()
{
    MinHeap h(11);
    return 0;
}
