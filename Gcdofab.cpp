#include<bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int gcd(int a, int b) 
    {
        // code here
        while (b != 0) 
       {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
};

int main()
{
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

