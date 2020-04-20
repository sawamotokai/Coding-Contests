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
  int N; cin>>N;
  vi a(N);
  rep(i,N) cin >> a[i];
  double avg = 0;
  rep(i,N) avg+=a[i];
  avg = avg/(double)N;
  avg = round(avg);
  ll sum =0;
  rep(i,N) {
    sum += pow(a[i]-avg, 2);
  }
  cout << sum << endl;
  return 0;
}