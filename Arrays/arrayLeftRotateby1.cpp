/*
#include <iostream>
using namespace std;
void leftRotateby1(int arr[], int n)
{
    int temp;
    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
        leftRotateby1(arr, n);
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
*/

#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int d, int n)
{
    reverse(arr, 0, d - 1);
    n=n%d;
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    leftRotate(arr, d, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
