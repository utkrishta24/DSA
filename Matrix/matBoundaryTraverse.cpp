// first row left to right, last column top to bottom, last row right to left and first column bottom to top

#include <bits/stdc++.h>
using namespace std;
// 0(R+C)
const int R=3;
const int C=2;
void bTraversal(int arr[R][C])
{

    if(R==1){
        for (int i = 0; i < C; i++)
            cout << arr[0][i] << " ";
            }
    else if(C==1){
        for (int i = 0; i < R; i++)
            cout << arr[i][0] << " ";
    }
    else{
        for (int i = 0; i < C; i++)
             cout << arr[0][i] << " ";
        for (int i = 1; i < R; i++)
             cout << arr[i][C-1] << " ";
        for (int i = C-2; i >=0; i--)
             cout << arr[R-1][i] << " ";
        for (int i = R-2; i >=0; i--)
             cout << arr[i][0] << " ";
    }
}

int main()
{

    int arr[R][C] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    bTraversal(arr);

    return 0;
}
