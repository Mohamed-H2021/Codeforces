#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++){
    cin>>a[i];
    if(a[i]==1 || a[i]==n){
        cout << "NO" << endl;
        return 0;
    }
  }
  sort(a,a+m);
  int c=0;
  for(int i=0;i<m;i++){
    if(a[i]+1==a[i+1] && a[i]+2==a[i+2]){
        cout << "NO" << endl;
        return 0;
    }
  }
  cout << "YES" << endl;

   return 0;
}
