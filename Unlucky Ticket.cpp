#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int>v(1005);
int main()
{
int n,f=1,h=1;
cin>>n;
string s,l,r;
cin>>s;
l=s.substr(0,n);
r=s.substr(n,2*n-1);
sort(l.begin(),l.end());
sort(r.begin(),r.end());
///cout << r << " " <<l << endl;
for(int i=0;i<n;i++){
    if(l[i]<=r[i]){
         f=0;
         break;
    }


}
for(int i=0;i<n;i++){
    if(l[i]>=r[i]){
         h=0;
         break;
    }

}
if(f||h)
    cout << "YES" << endl;
else
    cout << "NO" << endl;

/*

odd

3
1 1 2
2 1

5
1 1 1 2 3
1 2 1 3 1


5
1 1 2 2 3
1 2 1 2 3
<= n-1

 even

 6
 1 1 1 2 3 5
 1 2 1 3 1 5


 6
 1 1 1 1 2 4
 <= n/2

 7
674 712 674 674 674 674 674
*/
}

