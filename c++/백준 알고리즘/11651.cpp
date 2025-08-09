#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;			//a.first�� ������ true. �� ������ �տ� ��ġ�� �ȴ�.
	}

	return a.second < b.second;				//a.second�� �� ������ true. �� ������ �տ� ��ġ�� �ȴ�.
}


int main() 
{
	vector<pair<int, int>> a;
	int n;		//��� ���� ���ΰ�
	cin >> n;

	int x; int y;

	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;

		a.push_back(make_pair(x, y));
	}

	sort(a.begin(), a.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << "\n";
	}
}
