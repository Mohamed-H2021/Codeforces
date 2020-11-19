#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
int vistd[10004];
vector<int>a[10004];
vector<int>dis(10004,0);
void dfs(int k){
   if(vistd[k]==0){
    vistd[k]=1;
    for(int i=0;i<a[k].size();i++){
        if(!vistd[a[k][i]]){
/// to find the distance between each node and their children dis[a[k][i]]=dis[k]+1;
            dfs(a[k][i]);
        }
    }
   }

}
int freq[2004];
*/
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll x=*max_element(a,a+n);
      for(int i=0;i<n;i++){
                a[i]=x-a[i];
         }

    if(k%2){
         for(int i=0;i<n;i++){
            cout << a[i] << " " ;
         }
    cout << endl;
    }
    else{
        ll z=*max_element(a,a+n);
    for(int i=0;i<n;i++){

        cout << z-a[i] << " " ;
    }

    cout << endl;
    }
}




}
