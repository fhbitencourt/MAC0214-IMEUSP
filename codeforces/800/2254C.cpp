#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl '\n'
// #define int long long
#define pb push_back
typedef long long ll;
// typedef pair<int,int> pii;

const double PI = acos(-1.0);
const ll MOD = 1e9+7;
const ll INF = 1e18;
const ll MAXN = 2e5+10;
const ll MAXT = 1e3+10;

vector<int> pi(string s){
    vector<int> p(s.size());
    for (int i = 1, j = 0; i<s.size(); ++i) {
        while(j > 0 and s[j] != s[i]) j = p[j-1]; 
        if(s[j] == s[i]) j++;
        p[i] = j;
    }
    return p;
}

pair<int, vector<int>> matching(string& t, string& s){
    int matches = 0;
    vector<int> p = pi(s), match;
    for (int i = 0, j = 0; i < t.size(); ++i) {
        while(j > 0 and s[j] != t[i]) j = p[j-1];
        if(s[j] == t[i]) j++;
        if(j == s.size()) {
            match.pb(i - j + 1);
            matches++;
            j = p[j-1];
        }
    }

    return {matches, match};
}


void solve(){
    int n; cin >> n; 
    string a,b; cin >> a >> b;

    if(n < 3){ 
        if(a == b){
            cout << "YES\n";
            return;
        }else{
            cout << "NO\n";
            return;
        }
    }

    vector<string> p = {"001","110","011","100"};
    int conta[4] = {0, 0, 0, 0};
    int contb[4] = {0, 0, 0, 0};
    

    for (int i = 0; i < 4; ++i) {
        conta[i] = matching(a, p[i]).first; 
    }

    for (int i = 0; i < 4; ++i) {
        contb[i] = matching(b, p[i]).first; 
    }
    
    bool ok = true; 
    for (int i = 0; i<4; ++i) {
        if(conta[i] != contb[3-i]) ok = false;
    }
    
    int cont = 0;
    for (int i = 0; i < 4; ++i) {
        if(conta[i] == 0) ++cont;
    }

    if(cont == 4){
        cout << "NO\n";
        return;
    }


    if(ok){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";

}

int32_t main() {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr); 

    ll TC; TC = 1;
    cin >> TC;
    while(TC--) solve();
}

