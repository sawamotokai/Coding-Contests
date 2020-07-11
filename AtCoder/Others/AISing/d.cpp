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
  int n; string x; cin >> n >> x;
  // find f(n)
  int fn = 0;
  int res = 0;
  do {
    int popcount = 0;
    rep(i,n) if (x[i] == '1') popcount++;
    rep(i, n) {
      res = (res*2 + (int)x[i] - '0') % popcount; 
    }
    int now = res;
    string x = "";
    while (now > 0) {
      string add = "0";
      if (now&1) {
        add = "1"; 
      }
      now >>= 1;
      x += add;
    }
    reverse(x.begin(), x.end());
    fn++;
  } while (res != 0);

  cout << fn << endl;

  return 0;
}