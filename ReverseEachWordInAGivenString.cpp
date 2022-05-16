// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<int>st;
        int i,j;
        string ans="";
        for(i=0;i<s.length();i++)
        {   
            j=i;
            while(s[j]!='.'&&s[j]!='\0')
            {
                st.push(s[j]);
                j++;
            }
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            if(j!=s.length())
            {
                ans+='.';
            }
            i=j;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
