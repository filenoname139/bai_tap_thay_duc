#include <bits/stdc++.h>
using namespace std;
const int Max_val=3*1e6;
int t;
vector<int> prime(Max_val+5,1);

void sieve(){
  prime[0]=prime[1]=0;
  for(int i=2;i*i <= Max_val;++i){
    if(prime[i]){
      for(int j=i*i;j <= Max_val;j+=i){
        prime[j]=0;
      }
    }
  }
}


int tongcs(int n){
  int res=0;
  while(n > 0){
    res+=n%10;
    n/=10;
  }

  return res;
}


bool kt_db(int n){
  if(prime[n]){
    if(tongcs(n) % 5 == 0){
      return true;
    }
  }

  return false;
}


void solve(){
  int l,r;
  cin >> l >> r;

  int dem=0;
  for(int i=l;i <= r;++i){
    if(kt_db(i)) dem++;
  }

  cout << dem << '\n';
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  sieve();
  while(t--){
    solve();
  }
  return 0;
}
