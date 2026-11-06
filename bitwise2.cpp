#include <bits/stdc++.h>
#define ll long long
#define getbit(x,i) ((x) >> (i))&1
using namespace std;
const int NMAX=10;
int n;

int soluongbit1(int mask,int len){
  int dem=0;
  for(int i=0;i < len;++i){
    if(getbit(mask,i)){
      dem++;
    }
  }

  return dem;
}


void solve(){
  ll res=0;
  for(int len=2;len <= NMAX;len+=2){
    for(int mask=0;mask < (1<<len);++mask){
      if(soluongbit1(mask,len) != len/2) continue;

      ll tmp=0;
      for(int i=len-1;i >= 0;--i){
        if(mask & (1 << i)){
          tmp=tmp*10+4;
        }else tmp=tmp*10+7;
      }

      if(tmp >= n){
        if(res == 0 || tmp < res)
          res=tmp;
      }
    }
  }

  cout << res;
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  solve();
  return 0;
}
