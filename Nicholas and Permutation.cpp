#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int x,y;
for(int i=1;i<=n;i++){
    if(a[i]==1)
        x=i;
     if(a[i]==n)
        y=i;
}

cout << max(abs(n-x),max(abs(n-y),max(abs(1-x),abs(1-y)))) << endl;


    /*
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int start=1,endd=n,mid;
    while(start<endd){
         cout << start << " " << endd << endl;
        mid=(start+endd+1)/2;

        cout << "? " << mid<< endl;
        fflush(stdout);
       string s;
       cin>>s;
       if(s=="-1")
        return 0;
      else if(s==">=")
        start=mid;
       else if(s=="<")
        endd=mid-1;

    }
    cout << "! " << start << endl;
     fflush(stdout);
    string  x;
    cin>>x;
    if(x=="1")
        continue;
    else
        return 0;

   }
*/


}


