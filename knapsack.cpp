#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int NMAX=1e9;
int N,W;
vector<int> w;
vector<int> v;

void solve(){
  vector<ll> dp(W+5,0);
  
  for(int i=0;i < N;++i){
    for(int j=W;j >= w[i];--j){
      dp[j]=max(dp[j],dp[j-w[i]] + v[i]);
    }
  }

  cout << dp[W];
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> N >> W;
  w.resize(N+5);
  v.resize(N+5);
  for(int i=0;i < N;++i){
    cin >> w[i] >> v[i];
  }

  solve();
  return 0;
}
