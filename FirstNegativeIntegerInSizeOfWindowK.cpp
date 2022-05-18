// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                    
        
        queue<long long>q;
        vector<long long>v ;
        long long i=0;
         for(i=0;i<n;i++)
         {
             if(arr[i]<0)
             q.push(i);
         }
         long long s=0,f=k-1;
         while(f<n)
         {
             if(f<q.front()||q.empty()==true)
             {
                 v.push_back(0);
             }
             else
               if(s==q.front())
               { 
                 v.push_back(arr[q.front()]);
                 q.pop();
               }
               else
             if(f>=q.front())
             {
                 v.push_back(arr[q.front()]);
             }
             s++;
             f++;
         }
        return v;
 }
