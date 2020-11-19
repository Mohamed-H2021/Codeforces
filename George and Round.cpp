#include <bits/stdc++.h>
#include <string>
using namespace std;
int n,m;

map<int,int>mpa,mpb;
int a[3001],b[3001];
int main()
{
cin>>n>>m;
int c=0,f=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    mpa[a[i]]++;
}
for(int i=0;i<m;i++){
    cin>>b[i];
    mpb[b[i]]++;
}
  for(int i=0;i<n;i++){
        f=0;
    for(int j=0;j<m;j++){
        if(a[i]==b[j]){
            f=1;
            b[j]=0;
            break;
        }

    }
    if(f==0){
        for(int j=0;j<m;j++){
            if(a[i]<b[j]&& b[j]>0){
                f=1;
                 b[j]=0;
                break;
            }

        }
    }
    if(f==0){
            c++;
        }

  }
  cout << c << endl;
  /*
  5
2 3 5 7
4
1 5 9 8
4*/
   return 0;
}
