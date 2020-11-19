#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    long long n,k,res;
    cin>>n>>k;
    if(n&1){
        res=n/2 +1;
        if(k<=res)
            cout << 2*k -1 << endl;
        else cout << 2*(k-res) << endl;
    }
    else{
        res =n/2;
          if(k<=res)
            cout << 2*k -1 << endl;
        else cout << 2*(k-res) << endl;
    }

}
