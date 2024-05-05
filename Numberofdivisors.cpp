#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		int count_divisors(int n)
		{
		    int count = 0;
            int sqrt_N = sqrt(n);
            for (int i = 1; i <= sqrt_N; ++i) 
            {
                   if (n % i == 0) 
                   {
                       if (i % 3 == 0) 
                       {
                         count++;
                        }
                   if (i != n / i) 
                   {
                       if (n / i % 3 == 0) 
                       {
                          count++;
                       }
                    }
              }
            }
        return count;
		}
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	int ans = ob.count_divisors(n);
    	cout << ans << "\n";
    }
	return 0;
}