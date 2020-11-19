#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s;
cin>>s;
int n=s.length()-1,idx=10;
for(int i=0;i<n;i++){
    if((s[i]-'0')%2==0){
        idx=i;
        if(s[n]>s[idx])
            break;
    }
}
if(idx==10){
    cout << -1 << endl;
}
else {
    swap(s[idx],s[n]);
    cout << s<< endl;
}


return 0;
}
