//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int c=0,m=0,b=0;
        for(int i=0;i<n;i++){
            b+=a[i];
            if(a[i]) a[i]=-1;
            else a[i]=1;
        }
        for(int i=0;i<n;i++){
            c+=a[i];
            m=max(c,m);
            if(c<0){
                c=0;
            }
        }
        return b+m;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends