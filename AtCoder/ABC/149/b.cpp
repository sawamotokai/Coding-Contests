#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
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
const ll INF = 1e18L + 1;
//clang++ -std=c++11 -stdlib=libc++ 

int main() {
  ll A,B,K; cin >>A>>B>>K;
  if (A>K) {
    A-=K;
    printf("%lld %lld\n", A, B);
    return 0;
  } else {
    B -= (K-A);
    if (B<0) B =0;
    A=0;
  }
  printf("%lld %lld\n", A, B);
  return 0;
}