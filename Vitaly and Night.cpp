#include<bits/stdc++.h>
using namespace std;
int vstd[2000];
int main()
{

  int n,m,ans=0;
  cin>>n>>m;
  int b[2*m];
   while(n--){
    for(int i=0;i<2*m;i++){
        cin>>b[i];
    }
    for(int i=0;i<2*m;i++){
        if(b[i]==1 && i%2==0){
            ans++;
            i++;
        }
        else if (b[i]==1 && i%2)
                  ans++;


    }
  ///   cout << ans << endl;
   }
   cout << ans << endl;

/*
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int start=1,endd=n,mid;
    while(start<=endd){
         cout << start << " " << endd << endl;
        mid=(start+endd+1)/2;
        if(start==endd)
            break;

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
    cout << "! " << mid << endl;
     fflush(stdout);
    string  x;
    cin>>x;
    if(x=="1")
        continue;
    else
        return 0;

   }
*/
    /*
 int n,m;
 cin>>n>>m;
 int a[n];
int dp[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
    if(!dis[a[i]]){
        dis[a[i]]++;
        dp[i]++;
    }
    else{
        dp[i]=dp[i-1];
    }

 }
 reverse(dp,dp+n);
 while(m--){
    int x;
    cin>>x;
    cout << dp[x-1] << endl;
 }
*/

   }



    /*
    cin.get(array)
    cin.get(array,a+size,X) will print the elements before the X after it.
    cin.getline(array) is better
    */
/*
//     to copy two character arrays
    char a[]="AAA",ah[4]=;
    strcpy(ah,a);
    cout << ah << endl;


    // to tie two strings use strcat
    /*
         char a[]="AAA",ah[4]="med";
    strcat(ah,a);
    cout << ah << endl;
    */


    // to compare two charcter arrays use strcmp
    /*
    cout << strcmp("abc","abc") << endl;
    1 if s1>s2 , 0 s1=s2 and -1 else . ( grater may be in size or length or even the ask code);
    */
    // to find the length of a given charchter array use strlen
   /* to print a desired charchter
    string s ;
   cin>> s;
     cout<<s[4];

  string name,lastname ;
   cin >>name >>lastname ;
   string fullname = name + " " + lastname; // to add to name the last name directly name.append (lastname)

   cout <<fullname << endl;
   cout << fullname.find('n') << endl;
*/
/*
         string s ;
            getline(cin,s,'/'); // to write a paragraph and stop at '/'
            cout << s.at(0)<<endl;
            */
            /*
            string x ="medo2019";
           string m= x.substr(4);
           string z= x-m;

             cout <<z << endl; //  print from 4 to the end
             */
             /*

             string x="medo2019",y="22";
             x.swap(y);
              cout << x << endl;

              string s="ahmad";   // to find x from the right
              cout <<s.rfind("a") << endl;
              /*
                        */
                        /*
                        string s="medohendy";
                        cout <<s.erase(0,3) << endl; // will erase the first three charchters
                        */
                        /*
                         string s="medohendy";
                        cout <<s.erase(3) << endl; // will erase from the fourth letter to the end
*/
/*
string x="ahmad12345";
cout <<x.replace(5,5," ali") << endl;

string x="ahmad12345";
cout <<x.replace(x.find("1"),5,"ali") << endl;
*/
/*
      string x="ahmad12345";
cout <<x.insert(5," ali ") << endl;
*/
/*
string s;
 int z;
  getline(cin,s);
   int x=s.size();
   char a[x+1];
   strcpy(a,s.c_str()); // to pass a sting into array
   for (int i=0;i<=x;i++){
    if (a[i]== '\ ')
     z=i;
   }
        cout << x.erase(z) << endl;
        */
        /*
        string x,y;
        getline(cin,x);
        getline(cin,y);
         if (strcmp("x","y")==1){
            cout << y << endl;
         }
              else if (strcmp("x","y")==-1){
            cout << x << endl;
         }
         */
         /*
          string x,y;
        getline(cin,x);
        getline(cin,y);
        if (x.size()>y.size()){
            cout << y << endl;
        }
         else if (x.size()<y.size()){
            cout << x << endl;
        }
          else if (x.size()==y.size()){
            if (x.compare(y)>0){
                cout << y << endl;
            }
            else if (x.compare(y) <0){
                cout << x << endl;
            }
        else if   (x.compare(y) ==0){
                cout << 0 << endl;
            }
        }
        */
        /*
         string x,y;
        getline(cin,x);
        getline(cin,y);
        cout << x.size()<< " " << y.size()<< endl;;
        cout << x+y << endl; ;
      char a=x.at(0);
      char b=y.at(0);

      string s=x.erase(0,1);
       string c=y.erase(0,1);
       cout << b+s << " " << a+c << endl;
       */
       /*
string s;
   int n;
   cin >> n;
     while(n--){
        cin >>s;
    if (s.length()<=10){
          cout <<s << endl;
    }
    else if (s.length() >10){
            char a=s.at(0);
            char b=s.at(s.length()-1);
                cout << a<<s.length()-2<<b<<endl;

    }
     }


*/
/*
  string s;
 cin>>s;
    for(int i=0;i<s.length();i++){
       if(s[i]==','){
        s[i]=' ';
       }

    }
 cout <<s<<endl;

    return 0;
*/
/*

int n;
  string a,b,result="";
  cin>>n;
  while(n--){
     cin>>a>>b;
     for (int i = 0; i < a.length() ||
                    i < b.length(); i++) {
        if(i<a.length()){
            result+=a[i];
        }
         if(i<b.length()){
            result+=b[i];
        }
      }
      cout << result << endl;
      result="";
  }

/*

  string s,result="";
  cin>>s;
  for(int i=0;i<s.length();i++){
      if(int (s[i]) >=65 && int (s[i]) <91){
        s[i]=tolower(s[i]);
        result+=s[i];
      }
      else if(int (s[i]) >=97 && int (s[i]) <123){
        s[i]=toupper(s[i]);
        result+=s[i];
      }

  }
  cout << result << endl;
  */
  /*
    int l=0,d=0,temp=0;
    string s;
      cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                l++;

            }
            else if(s[i]=='D'){
                d++;
            }

            if (l-d >temp ){
                    temp=l-d;

            }
        }
        cout << temp << endl;
        */
        /*
       int n;
        string s,c="101",m="010";
        cin>>n;
         while(n--){
            cin>>s;
                size_t found=s.find("010");
             size_t   foun=s.find("101");

            if (found!=std::string::npos || foun!=std::string::npos)// std::string::npos means untill the end of the string
                {
                cout <<"Good" << endl;
            }
            else
                cout << "Bad" << endl; ccacc 2
                acca
         }
         */





