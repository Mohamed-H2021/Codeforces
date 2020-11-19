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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
             if(a[i]==0){
                cout << "T T" << " " ;
                i++;
             }
               else{
                cout <<'N' << " ";
                i++;
               }
        }
           else{
            cout << max(a[i],a[i+1]) << " ";
            i++;
           }
    }

   }





