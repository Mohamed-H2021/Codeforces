#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    long long e,sx,sy,ex,ey;
    string s;
    cin>>e>>sx>>sy>>ex>>ey;
    char hrzntl='E';
    int goalx=ex-sx;
    if(goalx<0){
            goalx*=-1;
        hrzntl='W';
    }
    char vrtcl='N';
    int goaly=ey-sy;
    if(goaly<0){
        goaly*=-1;
        vrtcl='S';
    }
    int t=0,disx=0,disy=0;
    for( t=1;t<=e;t++ ){
        char c;
          cin>>c;
        if(c==hrzntl)
            disx++;
        else if(c==vrtcl)
            disy++;
        if(disx>=goalx && disy>=goaly)
            break;
    }
        if(disx>=goalx && disy>=goaly)
            cout << t << endl;
        else
            cout << -1 << endl;

   return 0;
}
