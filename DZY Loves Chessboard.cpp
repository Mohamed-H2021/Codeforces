#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

  int n,m,f=0;
  cin>>n>>m;
  char a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
  }
   for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
        if(a[i][j]=='.'&&i%2==0){
            if(j%2==0 ){
                a[i][j]= 'W';
            }
            else {
                a[i][j]='B';
            }

        }
       else
       {
           if(a[i][j]=='.'){
            if(j%2==0 ){
                a[i][j]= 'B';
            }
            else {
                a[i][j]='W';
            }

        }
    }
  }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout <<a[i][j];
    }
    cout << endl;
  }

}
