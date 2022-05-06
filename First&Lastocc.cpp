// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int low=0,high=n-1;
    vector<int>v;
    while(low<=high)
    {
        int  mid=(low+high)/2;
        if(arr[mid]==x)
        {   int first=mid-1;
            int last=mid+1;
            while(arr[first]==x)
            {
                first--;
            }
            while(arr[last]==x)
            {
                last++;
            }
            v.push_back(first+1);
            v.push_back(last-1);
            return v;
        }
        else
        if(arr[mid]<x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    v.push_back(-1);
    v.push_back(-1);
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends
