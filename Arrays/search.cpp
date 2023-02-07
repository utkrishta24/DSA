#include<iostream>
using namespace std;
int main(){
    int n,item,pos=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>item;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item){
            pos=i+1;
            break;
        }
    }
    cout<<"Position:"<<pos;
return 0;
}