#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;

void solve(){
  int Max=INT_MIN;
  for(int i=0;i < n-2;++i){
    for(int j=i+1;j < n-1;++j){
      int g=__gcd(a[i],a[j]);
      for(int k=j+1;k < n;++k){
        int sum=a[i]+a[j]+a[k]+__gcd(g,a[k]);
        Max=max(Max,sum);
      }
    }
  }

  cout << Max;
}


signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  a.resize(n);
  for(int i=0;i < n;++i){
    cin >> a[i];
  }


  solve();
  return 0;
}
