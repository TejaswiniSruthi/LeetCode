//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0,h=n-1,c=0;
	    while(l<=h){
	        int m=(l+h)/2;
	        if(arr[m]==x){
	            c++;
	            int t=m;
	            m--;
	            while(arr[m]==x){
	                c++;
	                m--;
	            }
	            m=t+1;
	            while(arr[m]==x){
	                c++;
	                m++;
	            }
	            break;
	        }
	        if(arr[m]<x) l=m+1;
	        else h=m-1;
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends