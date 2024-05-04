#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int ispalindrome(int n)
    {
        int temp=n;
        int rem,rev=0;
        while(temp)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        } 
        if(n==rev)
            return 1;
        else
            return 0;
    }
    int isDigitSumPalindrome(int n) {
        // code here 
        int sum=0;
        while(n)
        {
            sum=sum+n%10;
            n=n/10;
        }
        return ispalindrome(sum);
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
