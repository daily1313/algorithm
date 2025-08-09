#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;			//a.first가 작으면 true. 즉 작은게 앞에 배치가 된다.
	}

	return a.second < b.second;				//a.second가 더 작으면 true. 즉 작은게 앞에 배치가 된다.
}


int main() 
{
	vector<pair<int, int>> a;
	int n;		//몇개를 받을 것인가
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
