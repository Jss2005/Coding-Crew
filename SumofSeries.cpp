#include<bits/stdc++.h>
using namespace std;
class Solution
 {
  public:
    long long seriesSum(int n) 
   {
        // code here
        long long c=  (1LL*n * (n+1))/2;
        return c;
    }
};

int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
   {
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}
