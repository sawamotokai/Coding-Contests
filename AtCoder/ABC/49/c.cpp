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

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int i = n - 1;
  while (i >= 4) {
    string five = s.substr(i - 4, 5);
    if (five == "erase" || five == "dream") {
      i -= 5;
      continue;
    }
    if (i < 5)
      break;
    string six = s.substr(i - 5, 6);
    if (six == "eraser") {
      i -= 6;
      continue;
    }
    if (i < 6)
      break;
    string sev = s.substr(i - 6, 7);
    if (sev == "dreamer") {
      i -= 7;
      continue;
    }
    puts("NO");
    return 0;
  }
  if (i != -1) {
    puts("NO");
    return 0;
  }
  puts("YES");
  return 0;
}