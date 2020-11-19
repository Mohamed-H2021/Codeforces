#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

/* count the digits
int countbits(int a,int b){
    int cnt=0;
    while(a||b){
     int lasa= (a&1);
     int lasb= (b&1);
     if(lasa!=lasb)
            cnt++;
     a= a>>1;
     b= b>>1;

    }
    return cnt;
}
*/
int main()
{
    /*
  /// BITWISE OPERATORS
  cout << (5<<2) << endl; /// increases each bit by 2^k  where k is the amount shifted by
  /// (a << b) = a*2^b

  cout << (5>>1) << endl; /// decreases each bit by floor (1/2^k)
  /// (a>>b) = floor(a/2^b)

  cout << ~5 << endl;
*/
/*
 int n;
 cin>>n;
 int a[n];
 int s=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
  for(int i=0;i<n;i++){
      s^=a[i];

 }
 cout << s << endl;
*/
/* XOR swaping
int a,b;
  cin>>a>>b;
  a=a^b;
  a = 7^5
  b=a^b;
  b= 7^5^5 >>>> 7
  a=a^b;
  a = 7^5^7 >>> 5
  cout << a<< " " << b ;
*//*
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);
  */
 int n,x,y,s=0;
 cin>>n;
 int a[n+1];
 a[0]=0;
 for(int i=1;i<=n;i++){
    cin>>a[i];
    s+=a[i];
 }
 int cum=0;
 cin>>x>>y; 
  for(int i=1;i<=n;i++){
    cum+=a[i];
    s-=a[i];
    if(cum >=x && cum<=y && s<=y && s>=x){
        cout << i+1 << endl;
        return 0;
    }
 }
 cout << 0 << endl;
  }



