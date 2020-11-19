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
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 ll a[n];
 for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
 int q;
 cin>>q;
 while(q--){
    ll x,y;
    cin>>x>>y;
     ll le=-1,ri=n,mid;
     while(le+1<ri){
        mid=(le+ri)/2;
        if(y>=a[mid])
          le=mid;
        else
        ri=mid;
     }
    ll rightidx=le;
    le=-1,ri=n;
    while(le+1<ri){
        mid=(le+ri)/2;
        if(x>a[mid])
            le=mid;
        else
            ri=mid;
    }
    ll leftidx=ri;
    cout << rightidx-leftidx+1 <<" ";
    

 }
 cout << endl;
}




