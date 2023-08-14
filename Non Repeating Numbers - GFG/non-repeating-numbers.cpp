//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int s=0,x=0,y=0,k=0;
        for(auto i:nums){
            s^=i;
        }
        int t=s;
        while(true){
            if(s&1) break;
            s=s>>1;
            k++;
        }
        for(auto i:nums){
            if(i&(1<<k)) x^=i;
            else y^=i;
        }
        if(x>=y) return{y,x};
        return{x,y};
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends