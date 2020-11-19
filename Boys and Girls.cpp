#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n,m;
cin>>n>>m;
int x=min(n,m);
if(n>=m){
    for(int i=1;i<=2*x;i++){
     if(i%2)
        cout << 'B';
     else
        cout << 'G';
}
for(int i=1;i<=n-m;i++){
        cout << 'B';
}
cout << endl;
}
else{
    for(int i=1;i<=2*x;i++){
     if(i%2)
        cout << 'G';
     else
        cout << 'B';
}
for(int i=1;i<=m-n;i++){
        cout << 'G';
}
cout << endl;


}


}

