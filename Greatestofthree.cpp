#include <bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int greatestOfThree(int A, int B, int C) 
    {
        // code here
        int max=0;
        if(A>B&&A>C)
        {
            max=A;
        }
        else if(B>A&&B>C)
        {
            max=B;
        }
        else
        {
            max=C;
        }
       return max;   
    }
};
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}