// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
        int i,j,c=0,mn=0,res;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                c++;
            }
        }
        for(i=0;i<c;i++)
        {
          if(arr[i]>k)
          {
              mn++;
          }
        }
        int s=1,f=i;
        res=mn;
        while(f<n)
        {
           if(arr[s-1]>k&&arr[f]<=k)
           {
               mn--;
           }
           else{
            if(arr[s-1]<=k&&arr[f]>k)
            {
                mn++;
            }
               
           }
           s++;
           f++;
           res=min(res,mn);
        }
        return res;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
