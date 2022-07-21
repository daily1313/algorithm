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
		int p,a; //패키지, 낱개
		cin>>p>>a; 
		v.push_back(make_pair(p,a));
	}
	
	int result = v[0].first;
	int ans1 = 0;
	int ans2 = 0;
	int cnt=0;
	// 끊어진 기타줄 수가 6개보다 작을때 
	if(n<6) 
	{
		sort(v.begin(),v.end(),cmp); // 패키지를 기준으로 오름차순 정렬 
		for(int i=0;i<m;i++)
		{
			if(v[i].second*n<result) //(낱개 * 개수)의 가격  < 패키지의 가격 
			{
				result = (v[i].second*n); // 변경 
			}
		}
		cout<<result;
	}
	
	else 
	{
		sort(v.begin(),v.end(),cmp); // 패키지를 기준으로 오름차순 정렬 
		if(n%6==0)
		{
			ans2 += (v[0].first * (n/6)); // 끊어진 기타줄 수가 6의 배수이면  
		}
		else
		{
			ans2 += (v[0].first * ((n/6)+1)); // 끊어진 기타줄 수가 6의 배수가 아니면 ex) 6 13일 때, 패키지 3개를 구입해야 한다. 
		}
		//패키지와 낱개를 모두 구매할 경우 
		while(cnt<n){
				ans1 += v[0].first; //패키지의 합 
				cnt+=6; 
				if(n-cnt<6) break;  
		}
		sort(v.begin(),v.end(),cmp2); // 낱개를 기준으로 오름차순 정렬 
		ans1 += (v[0].second*(n-cnt)); //낱개의 합 
		int min_result = min(ans2,ans1); // 낱개 + 패키지와 패키지와 비교해 더 작은 것이 최소가 된다. 
		// 낱개만 구매한 경우  
		if(min_result>v[0].second*n)  
		cout<<v[0].second*n<<'\n';
		else
		cout<<min_result<<'\n';
	}

}
