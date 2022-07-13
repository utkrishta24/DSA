#include <bits/stdc++.h>
using namespace std;

// for unsorted array use hashing AS:O(n)
void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];

        if (s.find(temp) != s.end())
            cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl;

        s.insert(arr[i]);
    }
}

// for sorted array use two pointer apporach
bool isPresent(int arr[], int n, int sum)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] + arr[high] == sum)
            return true;
        else if (arr[low] + arr[high] > sum)
            high--;
        else
            low++;
    }
    return false;
}

// for triplet in an array which gives sum
//  returns true if there is triplet with sum equal
//  to 'sum' present in A[]. Also, prints the triplet
// O(n2)
bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
    /* Sort the elements */
    sort(A, A + arr_size);
    /* Now fix the first element one by one and find the
    other two elements */
    for (int i = 0; i < arr_size - 2; i++)
    {
        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        l = i + 1;        // index of the first element in the remaining elements
        r = arr_size - 1; // index of the last element
        while (l < r)
        {
            if (A[i] + A[l] + A[r] == sum)
            {
                printf("Triplet is %d, %d, %d", A[i],
                       A[l], A[r]);
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
    return false;
}

int main()
{

    return 0;
}

// if given unsorted then hash is best
// not sort and then two pointer

//sorted two pointer is best

//for triplet sort and use pointer 
//hashing can do the work too
// O(logn)+O(n2)=O(n2)

//count pairs with given sum
//count triplets with given sum
//find if there is a triplet a,b,c such that a2+b2=c2