#include <bits/stdc++.h>
using namespace std;

#define sqr(x) ((x)*(x))
typedef long long ll;
const ll INFINT = numeric_limits<int>::max();

int main(){
    ll n,ans = INFINT, ans2 = 0;
    cin >> n;
    vector<ll> values(n);

    for(int i = 0 ; i < n ; i++){
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    for(int i = -100 ; i <= 100 ; i++){
        ans2 = 0;

        for(int j = 0; j < n ; j++){
            ans2 += sqr(i  - values[j]);
        }

        ans = min(ans, ans2);
    }

    cout << ans;

    return 0;
}