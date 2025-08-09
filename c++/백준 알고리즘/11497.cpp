#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
vector<int> v;
vector<int> vv;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int min=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int h;
			cin>>h;
			v.push_back(h);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(i%2==0) vv.push_back(v[i]);
		}
		for(int i=n-1;i>0;i--)
		{
			if(i%2==1)
			{
				vv.push_back(v[i]);
			}
		}
		for(int i=1;i<n;i++)
        {
            int result = abs(vv[i]-vv[i-1]);
            if(result > min)
                min = result;
        }
        v.clear();
        vv.clear();
        cout<<min<<'\n';
	}
	
	
}
