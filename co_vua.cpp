#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> d(8+2),x(9+2);
map<int,int> ch1,ch2;
int dem=0;


void ghinhan(vector<int> x){
  dem++;
  cout << "Nghiem " << dem << ": ";
  for(int i=1;i <= 8;++i){
    cout << x[i] << " ";
  }
  cout << '\n';
}

void cotrinhko(int i){
  for(int j=1;j <= 8;++j){
    if(d[j] == 0 && ch1[i+j] == 0 && ch2[i-j] == 0){
      d[j]=1;
      ch1[i+j]=1;
      ch2[i-j]=1;

      x[i]=j;
      if(i == 8) ghinhan(x);
      else cotrinhko(i+1);


      d[j]=0;
      ch1[i+j]=0;
      ch2[i-j]=0;
    }
  }
}


signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cotrinhko(1);

  cout << "Tong so nghiem la: " << dem;
  return 0;
}
