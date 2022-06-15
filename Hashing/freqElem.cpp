#include <bits/stdc++.h>

// naive O(n^2) AS:O(1)
void printFreq(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;           //check if seen  before
        for (int j = i; j < i; j++)
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            if (flag == true)    //if seen ignore
                continue;
            int freq=1;
            for (int j = i+1; j < i; j++) //if not seen before count frequency
                if(arr[i]==arr[j])
                    freq++;
            cout<<arr[i]<<" "<<freq<<endl;
        }
}

// efficient O(n) AS: O(n)
int printFreq(int arr[], int n)
{
    unordered_map<int , int> h;
    for(int i=0;i<n;i++)
        h[arr[i]]++;
    for(auto e: h)
        cout<<e.first<<" "<<e.second<<endl;
}
