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
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
int b[k];
for(int i=0;i<k;i++){
        cin>>b[i];
        int l=0,r=n-1,mid=0;
        bool ok=false;
        while(l<=r){
            mid=(r+l)/2;
            if(b[i]==a[mid]){
                ok =true;
                cout << "YES" << endl;
                break;
            }
            else if(b[i]>a[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(!ok)
            cout << "NO" << endl;
}


}




