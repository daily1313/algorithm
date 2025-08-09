#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[51];
int n, s;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> s;

	for (int i = 0; i < n && s; i++)
	{
		int idx = i;
		int now = arr[i];
		for (int j = i + 1; j < n && j - i <= s; j++)
		{
			if (arr[j] > now)
			{
				now = arr[j];
				idx = j;
			}
		}
		// 실행횟수 감소시킴 
		if (idx != i)
		{
			s -= (idx - i);
			for (int j = idx; j > i; j--)
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}