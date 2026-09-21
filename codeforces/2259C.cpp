#include <bits/stdc++.h>
#include <vector>
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
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];

    for (auto& b : a) {
        if (b == -1) b = 1;
        if(b == 1) break;
    }

    for(int i=n-1;i>=0;--i){
        if(a[i]==-1)a[i]=1;
        if(a[i]==1)break;
    }

    for(auto& b: a){
        cout << max(b,0) << " ";
    }cout <<endl;


}

int32_t main() {
  ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

  ll TC; TC = 1;
  cin >> TC;
  while(TC--) solve();
}

