#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n,mnodd=101;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
             mnodd=min(mnodd,a[i]);
        }

    }
    ///cout << mnodd;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2)
        cout << sum << endl;
    else{
            if(mnodd==101)
            cout << 0 << endl;
    else{
         sum-=mnodd;
        cout << sum << endl;
    }

    }
    /*
   int n;
   cin>>n;
   int a[n];
   int b[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2)
        b[i]=a[i];
   }
   /*
   if(n==1){
    if(a[0]%2){
        cout << 1 << endl;
        return 0;
    }
    else {
         cout << 0 << endl;
         return 0;
    }

   }
   vector<int>v;
   */
   /*
   int sum=0,sum2=0;
   for(int i=0;i<n;i++){
    sum+=a[i];
    sum2+=a[i];
   }
   if(sum%2)
    cout << sum << endl;
   else{
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(sum%2==0){
            sum-=a[i];
        }
        else
            break;
    }
     for(int i=0;i<sizeof(b)/sizeof(b[0]);i++){
        if(sum2%2==0){
            sum2-=b[i];
        }
        else
            break;
    }

    cout << max(sum,sum2) << endl;
   }
*/
   return 0;
}
