#include <bits/stdc++.h>
using namespace std;
class Solution
 {
  public:
    string armstrongNumber(int n)
    {
        // code here
        string number=to_string(n);
        n=number.length();
        long long output=0;
        for(char i:number)
            output=output+(long)pow((i-'0'),n);
        if(output==stoll(number))
           return("Yes");
        else
           return("No");
    }
};
int main() 
{
    int t;
    cin >> t;
    while (t--) 
{
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}