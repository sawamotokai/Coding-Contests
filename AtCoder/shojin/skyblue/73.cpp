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

int N,M;
int A,B;
vi to[105];
vi dag[105];
int ans[105];

int mod = 1e9 + 7;

int main() {
  // input
  cin >> N >> A >> B >> M;
  A--, B--;
  vi dist(N,INF);
  dist[A] = 0;
  rep(i,M) {
  int a,b; cin >> a >> b; a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  // find dist from a
  auto bfs = [&] {
    queue<int> q;
    q.push(A);
    while(q.size()) {
      int v = q.front(); q.pop();
      for (int u: to[v]) {
        if (dist[u] != INF) continue;
        dist[u] = dist[v] + 1;
        q.push(u);
      }
    }
  };
  bfs();
  // make shortest path DAG
  rep(v,N) {
    for (int u: to[v]) {
      if (dist[v] + 1 == dist[u]) dag[v].push_back(u);
    }
  }
  // dp
  vll dp(N);
  dp[A] = 1;
  queue<int> q;
  q.push(A);
  vi visited(N);
  visited[A] = true;
  while (q.size()) {
    int v=q.front();q.pop();
    for (int u:dag[v]) {
      (dp[u]+=dp[v])%=mod;
      if (visited[u]) continue;
      q.push(u);
      visited[u] = true;
    }
  }
  cout << dp[B] << endl;
  return 0;
}