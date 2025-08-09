#include <iostream>
#include <algorithm>
using namespace std;
double dp[10001];
double ans[10001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	ans[0] = 1;
	double result = -1;
	for (int i = 1; i <= n; i++)
	{
		cin >> dp[i];
		ans[i] = max(dp[i],dp[i] * ans[i-1]);
		result = max(result, ans[i]);
	}

	
	cout << fixed;
	cout.precision(3);
	cout << result << '\n';
}
