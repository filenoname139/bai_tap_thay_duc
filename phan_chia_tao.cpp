#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,tong=0;
vector<ll> a;


void solve(){
  ll res=LLONG_MAX;

  for(int mask=0;mask < (1 << n);++mask){
    ll sumA=0;
    
    for(int i=0;i < n;++i){
      if(mask & (1 << i))
        sumA += a[i];
    }
    ll sumB=tong-sumA;
    res=min(res,abs(sumA-sumB));
  }
  
  cout << res;
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  a.resize(n);
  for(int i=0;i < n;++i){
    cin >> a[i];
    tong+=a[i];
  }

  solve();
  return 0;
}
