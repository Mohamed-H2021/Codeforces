#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

   ll n,mx,c=0;
   cin>>n;
   mx=n*n;
   for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(i*i+j*j>mx)break;
        ll tmp=sqrt(i*i+j*j);
        if(tmp*tmp==i*i+j*j)c++;
    }
   }
   cout <<c/2 << endl;
}
