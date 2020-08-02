#include <bits/stdc++.h>
#include <cassert>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ok() puts(ok?"Yes":"No");
#define chmax(x,y) x = max(x,y)
#define chmin(x,y) x = min(x,y)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vvi = vector<vi>;
using vii = vector<ii>;
using gt = greater<int>;
using minq = priority_queue<int, vector<int>, gt>;
using P = pair<ll,ll>;
const ll LINF = 1e18L + 1;
const int INF = 1e9 + 1;
//clang++ -std=c++11 -stdlib=libc++ 

int main() {
  int n; cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  int ans = INF;
  rep(i,n) {
    if (s[i] == 'R') {
      cnt++;
    }
  }
  chmin(ans, cnt);
  chmin(ans, n-cnt);
  int cnt2 = 0;
  rep(i,cnt) if (s[i] == 'R') cnt2++;
  chmin(ans, cnt-cnt2);
  cout << ans << endl;
  return 0;
}