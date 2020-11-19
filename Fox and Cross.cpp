#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
    }
    }
    int ans=1;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]=='#' && a[i+1][j]=='#'&& a[i-1][j]=='#'&& a[i][j-1]=='#'&& a[i][j+1]=='#'){
            a[i][j]= a[i+1][j]= a[i-1][j]= a[i][j-1]= a[i][j+1]='.';
           }
    }
       }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='#')
                ans=0;
    }
        }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


   return 0;
}
