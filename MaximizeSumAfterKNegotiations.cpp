// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int arr[], int n, int k)
    {
        // Your code goes here
        sort(arr,arr+n);
        int i=0,c=0;
        long long sum=0;
        while(arr[i]<0&&k!=0)
        {
            arr[i]=-1*arr[i];
            k--;
            i++;
        }
        sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        // cout<<endl;
        // cout<<k<<" ";
        
        while(k--)
        {
            arr[c]=-1*arr[c];
        }
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends
