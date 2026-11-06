#include <bits/stdc++.h>
#define ll long long
#define getbit(x,i) ((x) >> (i)) & 1
using namespace std;
string s;

void solve(){
  ll res=0;
  ll n=s.size();

  for(int mask=0;mask < (1 << (n-1));++mask){
    ll num=0;
    
    for(int i=0;i < n;++i){
      num=num*10+(s[i]-48);
      if(i == n-1 || getbit(mask,i)){
        res+=num;
        num=0;
      }
    }
  }

  cout << res;
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  solve();
  return 0;
}
