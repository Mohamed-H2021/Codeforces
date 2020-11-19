#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n,m;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
int ans=max(2*a[0],a[n-1]);
if(b[0]<=ans)
    cout << -1 << endl;
else
    cout << ans << endl;
}

