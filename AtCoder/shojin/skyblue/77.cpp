#include <bits/stdc++.h>
#include <cassert>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ok() puts(ok?"Yes":"No");
template<class T> bool chmax(T &a, const T &b) { if(a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if(a > b) { a = b; return true; } return false; }
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

// arc34c
// faster wihtout sieve of erathosthenes
int A,B;
int main() {
  cin >> A>> B;
  map<ll,int> mp;
  vector<int> fl;
  auto factor = [&](int n) {
    int a = n;
    for (int i=2; i*i<=n && a > 1; i++) {
      while (a%i == 0) {
        fl.push_back(i);
        a /= i;
      }
    }
    if (a != 1) fl.push_back(a);
  };
  for (int i=B+1; i<=A; i++) {
    factor(i);
  }
  rep(i, fl.size()) mp[fl[i]]++;
  ll ans = 1;
  int mod = 1e9+7;
  for (auto p: mp) {
    (ans *= (p.second +1)) %= mod;
  }
  cout << ans << endl;
  return 0;
}