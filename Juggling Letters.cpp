#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    map<char,int>mp,v;
    int vst[100]={0};
    int x=n;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
             mp[s[i]]++;
             v[s[i]]=1;
        }
    }
    int f=0;
     for(char c='a';c<='z';c++){
        if(mp[c]%x!=0&&v[c]==1){
            f=1;
            cout << "NO" << endl;
            break;
        }
     }
     if(!f)
        cout << "YES" << endl;
   }


    return 0;
}
