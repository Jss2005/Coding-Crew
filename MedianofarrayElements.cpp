#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    //int n=sizeof(v)/sizeof(v[0]);
		    sort(v.begin(),v.end());
		    if(v.size()%2!=0)
		    {
		        return v[v.size()/2];
		    }
		    else
		    {
		        return (v[(v.size()/2)-1]+v[v.size()/2])/2;
		    }
		}
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
