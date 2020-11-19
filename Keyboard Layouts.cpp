#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string a,b,c;
cin>>a>>b>>c;
map<char,char>mp;
for(int i=0;i<26;i++){
    mp[a[i]]=b[i];
}
for(int i=0;i<c.length();i++){
    char xx=tolower(c[i]);
    if(xx==c[i] &&c[i]>'9'){
            c[i]=mp[c[i]];

    }

    else if(xx!=c[i]){
        c[i]=mp[tolower(c[i])];
        c[i]=toupper(c[i]);
    }

}
cout << c << endl;
return 0;
}
