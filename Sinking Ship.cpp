#include<bits/stdc++.h>
using namespace std;
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
   int n;
   cin>>n;
   map<int,string>mp1,mp2;
   for(int i=0;i<n;i++){
    string s,m;
    cin>>s>>m;
    mp1[i]=m;
    mp2[i]=s;
   }
   for(int i=0;i<n;i++){
    if(mp1[i]=="rat")
        cout << mp2[i] << endl;
   }
    for(int i=0;i<n;i++){
    if(mp1[i]=="child" || mp1[i]=="woman")
        cout << mp2[i] << endl;
   }
   for(int i=0;i<n;i++){
    if(mp1[i]=="man")
        cout << mp2[i] << endl;
   }
   for(int i=0;i<n;i++){
    if(mp1[i]=="captain")
        cout << mp2[i] << endl;
   }
  }



