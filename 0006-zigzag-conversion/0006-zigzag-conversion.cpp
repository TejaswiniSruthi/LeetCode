class Solution {
public:
    string convert(string s, int numRows) {
        string ns="";
        int p1=2*(numRows-1),p2=0,i=0,j=0,n=s.size();
        if(numRows==1 || numRows>n || n==1) return s;
        while(i<numRows){
            j=i;
            ns+=s[j];
            cout<<"\n";
            cout<<j<<" ";
            while(j+p1+p2<n || j+p1<n){
                if(j+p1<n){
                    // cout<<p1<<" ";
                    j+=p1;
                    cout<<"p1:"<<j<<" ";
                    ns+=s[j];
                    if(j+p2>=n) break;
                }
                if(j+p2 < n && j+p2!=j){
                    // cout<<p2<<" ";
                    j+=p2;
                    cout<<"p2:"<<j<<" ";
                    ns+=s[j];
                }
            }
            p1-=2;
            p2+=2;
            if(p1==0){
                p1=2*(numRows-1);
                p2=0;
            }
            i++;
        }
        return ns;
    }
};