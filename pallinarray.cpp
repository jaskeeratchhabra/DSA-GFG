// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int arr[], int n)
    {
    	// code here
    	int c=0;
    	for(int i=0;i<n;i++)
    	{
    	    int n1=arr[i];
    	    int rev=0;
    	    while(n1)
    	    {
    	      int d=n1%10;
    	      rev=rev*10+d;
    	      n1=n1/10;
    	    }
    	    if(rev==arr[i])
    	    c++;
    	}
    	if(c==n)
    	return 1;
    	else return 0;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
