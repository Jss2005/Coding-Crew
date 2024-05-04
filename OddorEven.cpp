#include<bits/stdc++.h> 
using namespace std; 
class Solution
{   
public:
    string oddEven(int N)
    {
        // code here
        if(N%2==0)
          return("even");
        else
          return("odd");
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
} 
