#include <bits/stdc++.h>
using namespace std;
int vis[100005];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


       int n;
       cin>>n;
       vector<string>v;
       for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
       }
       map<string,int>m;
       for(int i=v.size()-1;i>=0;i--){
         if(!m[v[i]]){
            cout << v[i] << endl;
            m[v[i]]++;
         }
       }

    return 0;
}
