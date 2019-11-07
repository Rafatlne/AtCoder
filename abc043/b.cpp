#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin >> s;

    for(char c: s)
    {
        if(c=='B')
        {
            if(ans.size()) ans.pop_back();
        }
        else ans.push_back(c);
    }
    cout << ans;
    
    return 0;
}