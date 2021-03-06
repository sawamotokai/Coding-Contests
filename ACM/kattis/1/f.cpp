#include <bits/stdc++.h>
#include <cassert>
#define rep(i, N) for (int i = 0; i < (N); ++i)
#define rep2(i, a, b) for (ll i = a; i <= b; ++i)
#define rep3(i, a, b) for (ll i = a; i >= b; --i)
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define all(c) begin(c), end(c)
#define ok() puts(ok ? "Yes" : "No");
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <class T> bool chmin(T &a, const T &b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vvi = vector<vi>;
using vii = vector<ii>;
using gt = greater<int>;
using minq = priority_queue<int, vector<int>, gt>;
using P = pair<ll, ll>;
template <class T> void takeUnique(vector<T> &v) {
  auto last = std::unique(v.begin(), v.end());
  v.erase(last, v.end());
}
const ll LINF = 1e18L + 1;
const int INF = 1e9 + 1;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int dxx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dyy[] = {1, 1, 0, -1, -1, -1, 0, 1};
// clang++ -std=c++11 -stdlib=libc++
//

int k, w, l;
double f(int d, double h, double b) {
  if (b == M_PI / 2)
    return INF;
  if (d == k) {
    h += 2 * tan(b) * w / 2;
    return h;
  }
  double nb = atan(2 * tan(b));
  // cout << nb << " " << tan(nb) << endl;
  double now = h + 2 * tan(b) * w;
  return f(d + 1, now, nb);
}

int main() {
  cin >> k >> w >> l;
  double lb = 0;
  double ub = M_PI / 2;
  rep(i, 100) {
    double md = (lb + ub) / 2.0;
    double ih = tan(md) * w / 2.0;
    double h = f(1, ih, md);
    if (h > l) {
      ub = md;
    } else {
      lb = md;
    }
  }
  printf("%.10f\n", lb * 180 / M_PI);
  return 0;
}
