#include<bits/stdc++.h>
using namespace std;
int b[101];
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int x=0,xx=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='x')x++;
    else
        xx++;
}
int mn=min(x,xx);
if(mn==n/2){
    cout << 0 << endl << s << endl;
    return 0;
}
if(mn==x){
        int b=0;
    for(int i=0;i<s.length();i++){
    if(s[i]=='X'){
            if(b<n/2 -mn){
                s[i]='x';
                b++;
            }

    }

}
cout << n/2-mn << endl << s << endl;
}
else if(mn==xx){
        int b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='x'){
                if(b<n/2 -mn){
                    s[i]='X';
                    b++;
                }
                else
                    break;

        }

    }
    cout << n/2-mn << endl << s << endl;
}

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


