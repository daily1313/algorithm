#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int number;

	for (int i = 0; i < n; ++i) {
		cin >> number;
		v.push_back(number);
	}

	sort(v.begin(), v.end());

	for (auto elem : v) {
        cout<<elem<<'\n';
    }

	return 0;
}