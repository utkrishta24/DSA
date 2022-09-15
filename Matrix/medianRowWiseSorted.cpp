#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
// assumptions:
// odd sized matrix
// all distinct elems

// naive: O(rc logrc)
// put all elements in an array O(r*c)
// sort the  array O(r*c logrc) //can be optimized O(r*c)
// return the middle elem of the sorted array O(1) //can be optimized O(r*c)

// efficient: O(r* log(max-min)*logc)
// using binary search
// 
int median(int arr[][MAX], int r, int c)
{
    int min = arr[0][0], max = arr[0][c - 1];
    for (int i = 1; i < r; i++) //0(r)
    {
        if (arr[i][0] < min)
        {
            min = arr[i][0];
        }
        if (arr[i][c - 1] > max)
        {
            max = arr[i][c - 1];
        }
    }
    int medPos = (r * c + 1) / 2;
    while (min < max)  //O(log(max-min)*r*logc)
    {
        int mid = (min + max) / 2;
        int midPos = 0;
        for (int i = 0; i < r; i++)
            midPos += upper_bound(arr[i], arr[i] + c, mid) - arr[i];
        if (midPos < medPos)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main()
{
    int r = 3, c = 5;
    int arr[][MAX] = {{5, 10, 20, 30, 40},
                      {1, 2, 3, 4, 6},
                      {11, 13, 15, 17, 19}};
    cout << median(arr, r, c);
    return 0;
}
