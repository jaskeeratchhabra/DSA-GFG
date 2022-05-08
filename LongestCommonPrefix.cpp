// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
      string ans="";
      int m=INT_MAX;
      for(int k=0;k<n;k++)
      {
          if(arr[k].length()<m)
          m=arr[k].length();
      }
      for(int i=0;i<m;i++)
      {
          int c=1;
          for(int j=1;j<n;j++)
          {
              if(arr[0][i]==arr[j][i])
              c++;
              else 
              break;
          }
          if(c==n)
          {
              ans+=arr[0][i];
          }
      }
      if(ans.length()>0)
      return ans;
      else
      return "-1";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
