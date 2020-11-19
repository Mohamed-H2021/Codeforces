#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int>v(1005);
int main()
{
   ll n,y,k;
   cin>>y>>k>>n;
   ll initial = k-y%k;
   ll mx= n-y;
   if(initial>mx){
    cout << -1 << endl;
    return 0;
   }
   cout << initial << " ";
   initial+=k;
   while(initial<=mx){
      cout << initial << " ";
      initial+=k;

   }
   cout << endl;


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

