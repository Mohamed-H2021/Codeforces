#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
ll r=10e9+1,l=0,mn,mx;
cin>>n;
vector<pair<int,int> >v ;
for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
}
for(int i=0;i<n;i++){
        if(v[i].first <=r)
            r=v[i].first;
        if(v[i].second>=l)
            l=v[i].second;
}
for(int i=0;i<v.size();i++){
    if(r==v[i].first && l==v[i].second){
        cout << i+1 << endl;
        return 0;
    }
}
cout << -1 << endl;


}

