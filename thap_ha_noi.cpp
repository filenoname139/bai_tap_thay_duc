#include <bits/stdc++.h>
using namespace std;
int n;


void thaphn(int n,char A,char B,char C){
  if(n == 1) cout << A << "->" << C << '\n';
  else {
    thaphn(n-1,A,C,B);
    thaphn(1,A,B,C);
    thaphn(n-1,B,A,C);
  }
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  thaphn(n,'A','B','C');
  cout << pow(2,n)-1;
  return 0;
}
