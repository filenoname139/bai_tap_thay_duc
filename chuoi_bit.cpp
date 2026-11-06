#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9+7;
long long n;

ll binapow(ll x,ll n){
  ll res=1;
  while(n>0){
    if(n&1) res=(res*x) % MOD;
    x=(x*x) % MOD;
    n>>=1;
  }

  return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    cout << binapow(2,n);
    return 0;
}
