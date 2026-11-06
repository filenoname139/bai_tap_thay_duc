#include <bits/stdc++.h>
#define uint unsigned int
using namespace std;
uint n,k;

void solve(){
  uint and_max=0;
  uint or_max=0;
  uint xor_max=0;

  for(uint i=1;i <= n;++i){
    for(uint j=i+1;j <= n;++j){
      and_max=max(and_max,((i&j) < k ? (i&j) : 0));
      or_max=max(or_max,((i|j) < k ? (i|j) : 0));
      xor_max=max(xor_max,((i^j) < k ? (i^j) : 0));
    }
  }

  cout << and_max << " "
    << or_max << " "
    << xor_max;
}


signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  solve();
  return 0;
}
