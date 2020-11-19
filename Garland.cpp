#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   string s,m;
   int ans=0;
   cin>>s>>m;
   map<char,int>mps,mpm;
   for(int i=0;i<s.length();i++){
    mps[s[i]-'a']++;
   }
   for(int i=0;i<m.length();i++){
    mpm[m[i]-'a']++;
   }
   for(int i=0;i<26;i++){
        if(mps[i] ==0&&mpm[i]>0){
            cout << -1 << endl;
            return 0;
        }
    ans+=min(mpm[i],mps[i]);
     /// cout << mps[i] << " " << mpm[i] << endl;
   }
   if(ans)
    cout << ans << endl;
   else
    cout <<-1 << endl;
   return 0;
}
