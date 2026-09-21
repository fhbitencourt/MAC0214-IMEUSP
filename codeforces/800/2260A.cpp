#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define endl '\n'
// #define int long long
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

const double PI = acos(-1.0);
const ll MOD = 1e9+7;
// const ll MOD = 998244353;
// const ll INF = 1e18;
const ll INF = 0x3f3f3f3f;
const ll MAXN = 2e5+10;
const ll MAXT = 1e3+10;


void solve(){
    int n; cin>>n;
    string s = "";

    for(int i=0;i<n;++i){
        char a; cin >>a;
        s += a;
    }

    bitset<50> bits(s);

    if(bits.count() > n-2){
        cout << -1 << endl;
        return;
    }
    
    int cont = 0;
    if(bits[n-1]) cont++;
    if(bits[0]) cont++;

    cout << cont << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

    ll TC; TC = 1;
    cin >> TC;
    while(TC--) solve();
}

