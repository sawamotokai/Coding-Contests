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
// abc34d
int main() {
  int n,k; cin >> n >> k; 
  vector<P> bottle(n);
  rep(i,n) cin >> bottle[i].first >> bottle[i].second;

  auto f = [&](double p) {
    sort(bottle.begin(), bottle.end(), [&](P a, P b){return a.first * (a.second - p) > b.first * (b.second - p);});
    double sum = 0;
    rep(i,k) sum += bottle[i].first*(bottle[i].second - p);
    return sum >= 0;
  };

  double ans = 0;
  double lo = -1;
  double hi = INF;

  rep(i, 100) {
    double mid = (lo + hi) / 2.;
    if (f(mid)) lo = mid;
    else hi = mid;
    ans = mid;
  }
  printf("%.12f\n", ans);
  return 0;
}