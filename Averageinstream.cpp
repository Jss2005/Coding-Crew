#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	vector<float> streamAvg(int arr[], int n)
       {
	    vector<float>avg;
	    float sum=0,average=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        average=sum/(i+1);
	        avg.push_back(average);
	    }
	    return avg;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}