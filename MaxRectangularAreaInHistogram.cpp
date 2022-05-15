// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long m=INT_MIN,cur;
        stack<long long>s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(s.empty()==false && arr[i]<=arr[s.top()])
            {
                int t=s.top();
                s.pop();
                cur=arr[t]*(s.empty()?i:(i-s.top()-1));
                m=max(m,cur);
            }
            s.push(i);
        }
            while(s.empty()==false)
            {
                int t=s.top();
                s.pop();
                cur=arr[t]*(s.empty()?n:(n-s.top()-1));
                m=max(m,cur);
            }
        return m;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
