#include<bits/stdc++.h>
using namespace std;
int b[101];
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];

  int vstd[1001]={0};
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
          for(int j=1;j<=n;j++){
            if(a[i]<=j){
                if(!vstd[b[j]]){
                    b[j]=a[i];
                    vstd[b[j]]=1;
                }
            }
          }
    }
    for(int i=1;i<=n;i++)
        cout << b[i] << " " ;
    cout << endl;

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


