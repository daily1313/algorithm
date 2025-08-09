#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 1000000000 

long long dist[100001];
long long price[100001];
long long N, sum;
long long greedy;

int main()
{
	cin >> N;

	for (int i = 1; i <= N - 1; i++)
		cin >> dist[i];
	
	for (int i = 1; i <= N; i++)
		cin >> price[i];
	
	greedy = MAX;

	for (int i = 1; i <= N - 1; i++)
	{
		if (price[i] < greedy) //다음 인덱스 비용이 이전 인덱스 비용보다 낮으  
			greedy = price[i];
		sum += greedy * dist[i];
	}

	cout << sum;

}
