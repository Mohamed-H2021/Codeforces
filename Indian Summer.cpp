#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


        int n;
        cin>>n;
        vector<pair<string,string> >v;
        for(int i=0;i<n;i++){
            string a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int ans=n;
        for(int i=0;i<n-1;i++){
            if(v[i].first==v[i+1].first && v[i].second==v[i+1].second)
                    ans--;
        }
        cout << ans << endl;



    return 0;
}
