// Consider an arrangement where n petrol pumps are arranged in a circular manner. We need to find the first petrol pump from where we can visit all petrol pumps and come back to the petrol pump without ever going out of the petrol.

#include <bits/stdc++.h>
using namespace std;
// naive
int petrolpump(int petrol[], int dist[], int n)
{
    for (int start = 0; start < n; start++)
    {
        int curr_petrol = 0;
        int end = start;
        while (true)
        {
            curr_petrol += (petrol[end] - dist[end]);
            if (curr_petrol < 0)
                break;
            end = (end + 1) % n;
            if (end == start)
                return start + 1;
        }
    }
    return -1;
}

// better
// use a deque
// 1 keep adding items to the end of deque while curr_petrol is greater than equal to 0
// 2 keep removing items from the front of the deque while curr_petrol is negative

// efficient: one traversal
//  if curr petrol becomes negative at pi then none of the petrol pumps from p0 to pi can be solution
//  p0,p1,...,pi-1,pi,pi+1,..pn-1
// let pi be first petrol pump where curr petrol becomes negative, then
//  curr petrol= j=0 to i sigma (petrol[j]-dist[j])

int firstPetrol(int petrol, int dist, int n)
{
    int start = 0;
    int curr_pet = 0;
    int prev_pet = 0;
    for (int i = 0; i < n; i++)
    {
        curr_pet += (petrol[i] - dist[i]);
        if (curr_pet < 0)
        {
            start = i + 1;
            prev_pet += curr_pet;
            curr_pet = 0;
        }
    }
    return ((curr_pet + prev_pet) >= 0) ? (start + 1) : -1;
}



class petrolPump
{
public:
    int petrol;
    int distance;
};

int printTour(petrolPump arr[], int n)
{
    int start = 0;
    int end = 1;
    int curr_petrol = arr[start].petrol - arr[start].distance;
    while (end != start || curr_petrol < 0)
    {
        while (curr_petrol < 0 && start != end)
        {
            curr_petrol -= arr[start].petrol - arr[start].distance;
            start = (start + 1) % n;
            if (start == 0)
                return -1;
        }
        curr_petrol += arr[end].petrol - arr[end].distance;
        end = (end + 1) % n;
    }
    return start;
}

int main()
{
    petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = printTour(arr, n);
    (start == -1) ? cout << "No solution" : cout << "Start = " << start;
    return 0;
}