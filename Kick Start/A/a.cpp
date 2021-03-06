#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
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

int main()
{
  int t;
  cin >> t;
  rep(_, t)
  {
    int n, b;
    cin >> n >> b;
    minq pq;
    rep(i, n)
    {
      int a;
      cin >> a;
      pq.push(a);
    }
    int ans = 0;
    int house = 0;
    while (b >= 0 && house < n)
    {
      b -= pq.top();
      pq.pop();
      if (b >= 0)
        ans++;
    }
    cout << "Case #" << _ + 1 << ": " << ans << endl;
  }
  return 0;
}