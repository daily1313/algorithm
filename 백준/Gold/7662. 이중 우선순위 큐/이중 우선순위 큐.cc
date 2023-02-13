#include <iostream>
#include <map>
#include <queue>
using namespace std;
int T, Q;
typedef long long ll;
int main()
{
	cin >> T;
	while (T--) {
		cin >> Q;
		priority_queue<ll, vector<ll>, greater<ll>> min_q;
		priority_queue<ll, vector<ll>, less<ll>> max_q;
		map<ll, ll> freq;
		char op;
		ll num;
		while (Q--) {
			cin >> op >> num;
			if (op == 'I') {
				max_q.push(num);
				min_q.push(num);
				freq[num]++;
			}
			else if (num == 1) {
				while (!max_q.empty() && freq[max_q.top()] == 0) 
					max_q.pop();
				
				if (!max_q.empty()) {
					freq[max_q.top()]--;
					max_q.pop();
				}
			}
			else {
				while (!min_q.empty() && freq[min_q.top()] == 0) 
					min_q.pop();
				
				if (!min_q.empty()) {
					freq[min_q.top()]--;
					min_q.pop();
				}
			}
		}
		while (!max_q.empty() && freq[max_q.top()] == 0)
			max_q.pop();
		while (!min_q.empty() && freq[min_q.top()] == 0)
			min_q.pop();
		if (min_q.empty())
			cout << "EMPTY\n";
		else
			cout << max_q.top() << " " << min_q.top() << "\n";
	}
}