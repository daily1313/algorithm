#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	return p1.first<p2.first;
}
bool cmp2(pair<int,int>p3,pair<int,int>p4)
{
	return p3.second<p4.second;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>v;
	for(int i=0;i<m;i++)
	{
		int p,a; //��Ű��, ����
		cin>>p>>a; 
		v.push_back(make_pair(p,a));
	}
	
	int result = v[0].first;
	int ans1 = 0;
	int ans2 = 0;
	int cnt=0;
	// ������ ��Ÿ�� ���� 6������ ������ 
	if(n<6) 
	{
		sort(v.begin(),v.end(),cmp); // ��Ű���� �������� �������� ���� 
		for(int i=0;i<m;i++)
		{
			if(v[i].second*n<result) //(���� * ����)�� ����  < ��Ű���� ���� 
			{
				result = (v[i].second*n); // ���� 
			}
		}
		cout<<result;
	}
	
	else 
	{
		sort(v.begin(),v.end(),cmp); // ��Ű���� �������� �������� ���� 
		if(n%6==0)
		{
			ans2 += (v[0].first * (n/6)); // ������ ��Ÿ�� ���� 6�� ����̸�  
		}
		else
		{
			ans2 += (v[0].first * ((n/6)+1)); // ������ ��Ÿ�� ���� 6�� ����� �ƴϸ� ex) 6 13�� ��, ��Ű�� 3���� �����ؾ� �Ѵ�. 
		}
		//��Ű���� ������ ��� ������ ��� 
		while(cnt<n){
				ans1 += v[0].first; //��Ű���� �� 
				cnt+=6; 
				if(n-cnt<6) break;  
		}
		sort(v.begin(),v.end(),cmp2); // ������ �������� �������� ���� 
		ans1 += (v[0].second*(n-cnt)); //������ �� 
		int min_result = min(ans2,ans1); // ���� + ��Ű���� ��Ű���� ���� �� ���� ���� �ּҰ� �ȴ�. 
		// ������ ������ ���  
		if(min_result>v[0].second*n)  
		cout<<v[0].second*n<<'\n';
		else
		cout<<min_result<<'\n';
	}

}
