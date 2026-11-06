#include <bits/stdc++.h>
using namespace std;
int n;
string s;

void binaxau(int index){
  if(index == n)
  {
    cout << s << "\n";
    return;
  }

  s[index]='0';
  binaxau(index+1);

  s[index]='1';
  binaxau(index+1);
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  s.resize(n);
  binaxau(0);
  return 0;
}
