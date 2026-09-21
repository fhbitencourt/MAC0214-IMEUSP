#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

const double PI = acos(-1.0);
const ll MOD = 1e9+7;
const ll INF = 1e18;
const ll MAXN = 2e5+10;
const ll MAXT = 1e3+10;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int tam = 0;
    for(int i = 1;i<s.length();++i){
        if(s[i]!=s[i-1]) tam++;
    }

    int diff = 0;
    for(int i=1;i<s.length()-1;++i){
        if(s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if(s[i + 1] == s[i - 1]) diff = 2;
            else diff = max(diff, 1);
        }
    }

    cout << tam + 1 - diff << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

    ll TC; TC = 1;
    cin >> TC;
    while(TC--) solve();
}

