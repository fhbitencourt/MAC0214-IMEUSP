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
    int a, b, c; cin >> a >> b >> c;
    cout << min(abs(a-b), min(abs(b-c), abs(a-c))) << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

  ll TC; TC = 1;
  cin >> TC;
  while(TC--) solve();
}

