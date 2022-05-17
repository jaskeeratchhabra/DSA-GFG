// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to find the minimum element in sorted and rotated array.
int minNumber(int arr[], int low, int high)
{
    // Your code here
     // Your code here
        int  mid;
        int n=low+high+1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]<arr[mid-1]||mid==0)
            {
                return arr[mid];
            }
            if(arr[mid]>arr[high])
            {
                low=low+1;
            }
            else
            if(arr[mid]<arr[high])
            {
                high=high-1;
            }
        }
        return -1;
    
}

// { Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;++i)
			scanf("%d", &a[i]);	
	
		printf("%d\n", minNumber(a,0,n-1) );
	}
	return 0;
}  // } Driver Code Ends
