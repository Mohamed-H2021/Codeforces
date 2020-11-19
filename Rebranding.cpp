#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  int a[200];
  for(int i=97;i<=122;i++){
        a[i]=i;
    }
  for(int j=0;j<m;j++){
    char x,y;
    cin>>x>>y;
    for(int i=97;i<=122;i++){
        if(a[i]==x)
            a[i]=y;
        else if(a[i]==y)
            a[i]=x;
    }

  }
  for(int i=0;i<s.length();i++){
    s[i]=a[s[i]];
    cout << s[i];
  }
  cout <<endl;

   return 0;
}
