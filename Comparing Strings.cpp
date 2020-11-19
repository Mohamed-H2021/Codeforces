#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char x,y;
string s,m;
int f=0,p=0;
cin>>s>>m;
if(s.length()!=m.length()){
    cout << "NO" << endl;
    return 0;
}
for(int i=0;i<s.length();i++){
    if(s[i]!=m[i]){
        f++;
        if(f==1){
            x=s[i];
            y=m[i];
        }
        else if(f==2){
            if(x==m[i]&&y==s[i])
                p=1;
        }
        else
            break;

    }

}
if(p==1 && f==2)
    cout<< "YES" << endl;
else
    cout << "NO" << endl;


/*
map<char,int>mp;
for(int i=0;i<s.length();i++){
    mp[s[i]-'0']++;
    mp[m[i]-'0']++;
}
for(int i=0;i<s.length();i++){
   if(mp[s[i]-'0']!=mp[m[i]-'0']){
    cout <<"NO"<< endl;
    return 0;
   }
}
for(int i=0;i<s.length();i++){
    if(s[i]!=m[i])
        f++;
}
    if(f==2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
*/

}

