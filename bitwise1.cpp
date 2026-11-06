#include <bits/stdc++.h>
#define getbit(x,i) (((x) >> (i)) & 1)
#define uit unsigned int
using namespace std;
string n;

void solve(){
  string N=n;
  bool full1=1;

  for(int i=0;i < N.size();++i){
    if(N[i] == '0'){
      N.erase(i,1);
      full1=0;
      break;
    }
  }
  if(!full1) cout << N;
  else{
    N.erase(1,1);
    cout << N;
  }
}



signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  cin >> n;

  solve();
  return 0;
}
