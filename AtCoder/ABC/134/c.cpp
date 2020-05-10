#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ok() puts(ok?"Yes":"No");
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef set<int> si;
typedef map<string, int> msi;
typedef greater<int> gt;
typedef priority_queue<int, vector<int>, gt> minq;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll LINF = 1e18L + 1;
const int INF = 1e9 + 1;
//clang++ -std=c++11 -stdlib=libc++ 

int main() {
  int n; cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];
  vi left(n);
  vi right(n);
  left[0] = 0;
  right[n-1] = 0;
  for (int i=1; i<n; i++) {
    left[i] = max(left[i-1], a[i-1]);
  }
  for (int i=n-2; i>=0; i--) {
    right[i] = max(right[i+1], a[i+1]);
  }
  rep(i,n) {
    cout << max(right[i], left[i]) << endl;
  }
 return 0;
} 