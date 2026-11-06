#include <bits/stdc++.h>
#define getbit(x,i) (((x) >> (i)) & 1)
#define uit unsigned int
using namespace std;
uit n;

void solve(){
}



signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  cin >> n;
  while(n--){
    uit gay;
    cin >> gay;
    cout << (~gay) << '\n';
  }
  return 0;
}
