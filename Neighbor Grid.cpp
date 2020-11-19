#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int  check(int i, int j){
    int c=0;
    if(i>0)c++;
    if(i<n-1)c++;
    if(j>0)c++;
    if(j<m-1)c++;
    return c;
}
int main()
{
int t;
cin>>t;
while(t--){
        int f=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(check(i,j)<a[i][j])
                    f=1;
            }
}
if(f)
    cout << "NO" << endl;
else{
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               cout << check(i,j) << " ";
            }
            cout << endl;
}
}
}
return 0;
}
