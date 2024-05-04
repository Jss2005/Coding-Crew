#include <bits/stdc++.h>
using namespace std;
class Solution{
public: 
    long long fact(int n) 
    {
            long long ans=1;
        while(n)
        {
            ans*=n;
            n--;
        }
    return ans;
   }
    long long nPr(int n, int r)
    {
        // code here
         return fact(n) / fact(n - r);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
