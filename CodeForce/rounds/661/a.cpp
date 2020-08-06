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


void solve() {
  int n; cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  rep(i,n-1) {
    if (a[i+1] - a[i] > 1) {
      puts("NO");
      return ;
    }
  }
  puts("YES");
}

int main() {
  int t; cin >> t;
  rep(i,t) solve();
  return 0;
}