// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
   int getMaxArea(int heights[], int n)
    {
        // Your code here
   stack<int> st;
   int currArea = 0, maxArea = 0;
   int i;
   st.push(0);
   for(i = 1; i < n; i++)
   {

       while(!st.empty() && heights[st.top()] >= heights[i])
       {
           
           int tp = st.top();
           st.pop();

           currArea =heights[tp]*(st.empty()?(i):(i - st.top() - 1));

           maxArea = max(maxArea,currArea);
       }

       st.push(i);
   }

   while(st.empty()==false)
   {
       int tp = st.top();
       st.pop();

       currArea = heights[tp]*(st.empty()?(i):(i - st.top() - 1));

       maxArea = max(maxArea,currArea);

   }
   
   return maxArea;
    }
    int maxArea(int arr[MAX][MAX], int n, int m) {
        // Your code here
        int area = getMaxArea(arr[0],m);
   
   for(int i  = 1; i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           if(arr[i][j]!= 0) 
           {
           arr[i][j] += arr[i-1][j];
           }
       }
       area = max(area,getMaxArea(arr[i],m));
   }
   
   return area;
       
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends
