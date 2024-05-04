#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        return double(P*R*T)/100;
    }
};
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int P, R, T;
        cin >> P >> R >> T;
        Solution ob;
        cout << fixed << setprecision(2);
        cout << ob.simpleInterest(P, R, T) << "\n";
    }
}