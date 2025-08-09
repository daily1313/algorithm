#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;

stack<string> tokenize_getline(const string& data, const char delimiter = ' ') {
	stack<string> result;
	string token;
	stringstream ss(data);

	while (getline(ss, token, delimiter)) {
		result.push(token);
	}
	return result;
}

int main() {

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		
		string data;
		getline(cin, data);

		stack<string> st = tokenize_getline(data, ' ');

		cout << "Case #" << i + 1 << ":" << " ";

		while (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << '\n';

	}

	return 0;
}
