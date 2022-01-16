#include <iostream>
using namespace std;

int main() {
    // your code goes here
    
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        for(int i=1;i<=n;i+2){
            for(int j=1;j<=m;j+2){
                count++;
            }
        }
        cout<<count<<endl;
                        

    }
    return 0;
}
