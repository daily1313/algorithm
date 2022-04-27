#include<iostream>
#include<cstdio>
using namespace std;
int arr[21];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1){
				scanf("%d,",&arr[i]);
			}
		else
			scanf("%d",&arr[i]);
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <n-1-i;j++)
		{
			arr[j] = arr[j + 1] -arr[j];
		}
	}
	cout << arr[0];
	for (int i = 1; i < n - k; i++)
		cout << ',' << arr[i];
	cout << endl;
}
