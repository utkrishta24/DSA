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

// efficient
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