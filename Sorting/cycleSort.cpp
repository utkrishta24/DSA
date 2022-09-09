// a worst case O(n2) sorting algo
// does minimum memory writes and can be useful for cases where memory write is costly
// in place and not stable
// useful to solve questions like find minimum swaps required to sort an array

// 

#include<bits/stdc++.h>
using namespace std;

void cycleSortDistinct(int arr[], int n){
    for (int cs = 0; cs < n-1; cs++)
    {
        int item =arr[cs];
        int pos=cs;
        for (int i = 0; i < n; i++)
            if(arr[i]<item)
                pos++;
        swap(item,arr[pos]);
        while (pos!=cs)
        {
            for (int i = cs+1; i < n; i++)
                if(arr[i]<item)
                    pos++;
            swap(item,arr[pos]);
        }  
    } 
}

int main()
{
    
 return 0;
}


/*

void cycleSort(int arr[], int n)
{
    // count number of memory writes
    int writes = 0;
 
    // traverse array elements and put it to on
    // the right place
    for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
        // initialize item as starting point
        int item = arr[cycle_start];
 
        // Find position where we put the item. We basically
        // count all smaller elements on right side of item.
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
 
        // If item is already in correct position
        if (pos == cycle_start)
            continue;
 
        // ignore all duplicate  elements
        while (item == arr[pos])
            pos += 1;
 
        // put the item to it's right position
        if (pos != cycle_start) {
            swap(item, arr[pos]);
            writes++;
        }
 
        // Rotate rest of the cycle
        while (pos != cycle_start) {
            pos = cycle_start;
 
            // Find position where we put the element
            for (int i = cycle_start + 1; i < n; i++)
                if (arr[i] < item)
                    pos += 1;
 
            // ignore all duplicate  elements
            while (item == arr[pos])
                pos += 1;
 
            // put the item to it's right position
            if (item != arr[pos]) {
                swap(item, arr[pos]);
                writes++;
            }
        }
    }
 
    // Number of memory writes or swaps
    // cout << writes << endl ;
}

*/