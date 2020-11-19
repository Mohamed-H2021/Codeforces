#include<bits/stdc++.h>
using namespace std;
#define ll long long
int freq[10];
int main()
{
 long long n;
 string s;
 cin>>n>>s;
 ll sum=0;

 for(int i=0;i<s.length();i++){
    sum+=(s[i]-'0');
    freq[(s[i]-'0')]++;
 }
 ll ans=0;
 for(int i=0;i<9;i++){
    for(int j=0;j<freq[i];j++){
        if(sum<n){
            ans++;
            sum+=9-i;
        }
    }
 }
cout << ans << endl;


return 0;
}
