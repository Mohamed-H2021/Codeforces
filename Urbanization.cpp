#include <bits/stdc++.h>
#include <string>
using namespace std;
int n,n1,n2;
    double s=0,w1=0,w2=0,ans=0;
    int a[100001];
int main()
{
    cin>>n>>n1>>n2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*
    if(n==n1+n2){
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        cout << fixed << setprecision(6) << s<< endl;
        return 0;
    }
    */
    sort(a,a+n);
    reverse(a,a+n);


    for(int i=0;i<min(n1,n2);i++){
        w1+=a[i];
       // cout << w1 << " ";
    }
  //  cout << endl;
     for(int i=min(n1,n2);i<n1+n2;i++){
        w2+=a[i];
     //   cout << w2 << " " ;
    }
    // cout << endl;
    ans+= w1/min(n1,n2);
    ans+=w2/max(n2,n1);
    cout << fixed << setprecision(9) << ans << endl;


   return 0;
}
