#include <iostream>
using namespace std;

void ToH(int n, char A, char b, char C)
{
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    ToH(n-1,A,C,B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    ToH(n-1,B,A,C);
}

int main()
{
}