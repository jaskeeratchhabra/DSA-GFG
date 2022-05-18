// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string arr)
    {
        // Your code goes here   
        unordered_map<char,int>mp;
        int len,res=INT_MAX;
        for(int i=0;i<arr.length();i++)
        {
            mp[arr[i]]++;
        }
        int k=mp.size();
        mp.clear();
        int i=0,j=0;
        while(j<arr.length())
        {  
           mp[arr[j]]++;
           if(mp.size()==k)
           {
           while(mp[arr[i]]>1)
           {   
               mp[arr[i]]--;
               i++;
           }
            int len=j-i+1;
            res=min(res,len);
           }
           j++;
        }
        return res;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends
