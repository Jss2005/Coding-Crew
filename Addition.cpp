#include<bits/stdc++.h> 
using namespace std; 
class Solution
{   
public:
    int addition(int A, int B)
    {
        // code here 
        return A+B;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A,B) << endl;
    }
    return 0; 
} 
