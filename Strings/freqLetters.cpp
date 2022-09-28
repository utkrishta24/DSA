#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Heygiiirl";
    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if(freq[i]>0){
            cout<<char(i+'a')<<" "<<freq[i]<<endl;
        }
    }
    return 0;
}
