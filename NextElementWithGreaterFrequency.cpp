// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        stack<int>s;
        vector<int>v;
        v.push_back(-1);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        s.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
          while(s.empty()==false&&mp[arr[i]]>=mp[s.top()])
          {
              s.pop();
          }
          int x=s.empty()?-1:s.top();
          v.push_back(x);
          s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends
