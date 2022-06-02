// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int>arr, int n) {
	    // code here
	 long long mini=1,maxi=1;
	 if(n==1)
	 return arr[0];
     long long mf=INT_MIN,temp,t=1;
	 for(int i=0;i<n;i++)
	 {
	     if(arr[i]==0)
	     {
	         maxi=1;
	         mini=1;
	     }
	     else
	     if(arr[i]<0)
	     {   
	       temp=maxi;
	       maxi=max(t,mini*arr[i]);
	       mini=temp*arr[i];
	     }
	     else
	     if(arr[i]>0)
	     {
	         maxi=maxi*arr[i];
	         mini=min(mini*arr[i],t);
	     }
	     mf=max(mf,maxi);
	     //cout<<arr[i]<<" "<<mf<<" "<<maxi<<endl;
	 }
	 return mf;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
