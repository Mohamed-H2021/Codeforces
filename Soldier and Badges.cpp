#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int n;
 cin>>n;
 int a[n];
 ll sum=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a,a+n);
 ll c=0;
 for(int i=1;i<n;i++){

    if(a[i]==a[i-1]){
        a[i]++;
        c++;
    }
 else if(a[i]<a[i-1]){
    int b= a[i-1]-a[i]+1;
    a[i]+=b;
    c+=b;
 }
 }
 cout << c << endl;


return 0;
}
