#include <bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int findNthTerm(int N) 
    {
        int sum=0;
        for(int i=1;i<=N;i++)
        {
            sum+=i;
        }
        return sum;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}