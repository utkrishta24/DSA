#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector <int> v{10,5,2,14};
//     v.pop_back();
//     for(int x:v)
//     cout<<x<<" ";
//     cout<<endl;
//     cout<<v.front()<<" "<<v.back();


//     return 0;
// }

// int main(){
//     vector <int> v{10,5,2,14};
//     auto it= v.insert(v.begin(),100);
//     v.insert(v.begin()+2,300);
//     v.insert(v.begin(),2,500);
//     vector <int> v2;
//     v2.insert(v2.begin(),v.begin(),v.begin()+3);

//     for(int x:v)
//     cout<<x<<" ";
//     cout<<endl;
    
//     for(int x:v2)
//     cout<<x<<" ";
//     cout<<endl;

//     return 0;
// }

// int main(){
//     vector <int> v{10,5,2,14};
//     v.erase(v.begin());
    
//     for(int x:v)
//     cout<<x<<" ";
//     cout<<endl;
//     v.erase(v.begin(),v.end()-1);
    
//     for(int x:v)
//     cout<<x<<" ";
//     cout<<endl;

//     return 0;
// }

// int main(){
//     vector <int> v{10,5,2,14};
//     v.clear();
//     cout<<v.size();
//     if(v.empty()==true)
//         cout<<"\nempty";
//     else
//         cout<<"\nnot empty";
//     return 0;
// }

int main(){
    vector <int> v{10,5,2,14};
    v.resize(7);
    cout<<v.size()<<endl;
     for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    v.resize(10,300);
     for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}