#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPalindrome(long long n)
    {
        if(reverse(n)==n)
        {
            return 1;
        }
        return 0;
    }
    long long reverse(long long n)
    {
        long long ans=0;
        while(n)
        {
            ans=ans*10+n%10;
            n=n/10;
        }
        return ans;
    }
    long long isSumPalindrome(long long n){
        int count=0;
        while(count<5)
        {
            if(isPalindrome(n))
            {
                return n;
            }
            n=n+reverse(n);
            count++;
        }
        if(isPalindrome(n))
        {
            return n;
        }
        else
        {
            return -1;
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}