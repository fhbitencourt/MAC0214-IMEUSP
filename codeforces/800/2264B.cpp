#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define endl '\n'
#define int long long
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

const double PI = acos(-1.0);
const ll MOD = 1e9+7;
// const ll MOD = 998244353;
const ll INF = 1e18;
// const ll INF = 0x3f3f3f3f;
const ll MAXN = 2e5+10;
const ll MAXT = 1e3+10;


void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    priority_queue<int> pq;
    int max_glob = -INF;

    for(int& nums: a) cin >> nums;

    int sum=0;
    for(int i=0;i<n;++i){
        if(i >= m-1){
            int pont = m*a[i] - sum;
            max_glob=max(max_glob,pont);
        }
        
        pq.push(a[i]);
        sum+=a[i];

        if((int)pq.size()>m-1){
            sum-=pq.top();
            pq.pop();
        }
    }

    cout << max_glob<< endl;

}

int32_t main() {
  ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

  ll TC; TC = 1;
  cin >> TC;
  while(TC--) solve();
}

