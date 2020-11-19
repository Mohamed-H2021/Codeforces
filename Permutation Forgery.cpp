#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[200004];
int cum[200004];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    /*to check if a number is contained within the
    v.push_back(7);
  vector  if(find(v.begin(),v.end(),7)!=v.end()){
        cout << 1 << endl;
    }
    */
    /*to sort by greater
    v.push_back(2);
    v.push_back(-1);
    v.push_back(5);
   sort(v.rbegin(),v.rend());
   cout << v[0];
   */
   /* to erase/insert
    v.erase(v.begin()+1);
    v.insert(v.begin()+2,7);
    */
    /*
    the distance bewteen tow elements in a vector
    cout << distance(v.begin(),v.begin()+2) << endl;
    */
    /* search about sub vector in a vector
    vector<int>vv;
    auto it =search(v.begin(),v.end(),vv.begin(),vv.end());
    if(it!=v.end())
        cout << "sub vector starts from index" << " " << it-v.begin() << endl;
        */
        /*
        vector must be sorted
      bool ans= binary_search(v.begin(),v.end());
      auto it=lower_bound(v.begin(),v.end(),2) /// find the first element grater than OR equal the given element
      auto it=upper_bound(v.begin(),v.end(),2) /// find the first element grater than  the given element
      resize(unique(v.begin(),v.end())-v.begin()); /// to remove the dublicates in vector and string
      set_intersection /// to find the insterction of elements of a given vector
      set_difference /// to find the elements in v1 not in v2
      set_union /// print the union
      swap_ranges /// to swap ranges in two vectors
      count(v.begin(),v.end(),6)/// print the occurences of 6
      */

      /* next permutation
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);
      do{
       for(int i=0;i<3;i++)
        cout << v[i] << " " ;
       cout<< endl;
      }while(next_permutation(v.begin(),v.end())); /// applicaple also for strings
      */
      /*
      queue<int>q;
      q.push(20);
      q.push(50);
      q.push(-4);
   /// the print the elements in the queue while(!q.empty()){
        cout << q.front()<< endl;
        q.pop();
      }
      deque<int>dq;        /// better than queue in processing and pushing elements
      ///dq.push_back(4);
     /// dq.push_back(1);
      priority_queue<int>p; /// sort the elements of the queue in ascending order

      stack<int>ss;
      ss.push(10);
      ss.push(20);
      ss.push(30);
      while(!ss.empty()){
        cout << ss.top() << endl;
        ss.pop();
      }
      */
      /*
      set<int>s;
      s.insert(20);
      s.insert(10);
      if(s.count(20))
        cout << "jj";
   /// multiset and multimap >>> allow repitoin while also sorting
   */
   /* string related functions
   string s="abc def hoi";
   cout << s.substr(3) << endl; /// print from the current index to the end of the string
   cout << s.substr(4,3)<< endl; /// the last parameter in the strings function alawys accounts for length not index
   cout << (int)s.find("hendy")<< endl; /// cast to integer to print NULL
   cout << s.find("abc",5) << endl; /// serch from the 6th index
   cout << s.find_last_of("abc") << endl;
   cout << s.find_first_of("abc") << endl;
  /// s.replace(4,3,"x");
   cout <<s<< endl;
   s.erase(1,2);
   s.erase(4);
   cout <<s;
*/
     int  t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        reverse(a,a+n);

        for(int i=0;i<n;i++)
            cout << a[i] << " " ;
        cout << endl;
     }
    return 0;

}
