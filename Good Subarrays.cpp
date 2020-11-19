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
 while(t--){
    string s;
    int n;
    cin>>n;
    cin>>s;
    map<int,int>mp;
    mp[0]=1;
    ll sum=0,ans=0;
    for(int i=1;i<=n;i++){
        sum+=(s[i-1]-'0');
        mp[sum-i]++;
        ans+=mp[sum-i]-1;

    }
    cout<< ans << endl;
 }


}
