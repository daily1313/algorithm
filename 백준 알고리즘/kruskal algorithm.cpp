#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

//�� �������� �ϳ��� �θ�(parent) �������� ������� ǥ���Ѵ�.
int parent[6];

//������ ����� �θ� ������ ��ȯ
int getParent(int x) {
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent[x]); // ����Ǿ��ִ� �θ� ������ ��ȯ�ϴ� ���ÿ�, ����Ǿ��ִ� �������� �θ� ������ ���� 
}

//�� ������ ����
void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	//a�� b�� �θ� ������ ���� ������ ��ġ��
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

//�� ������ ����Ǿ��ִ��� Ȯ��
bool findParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a == b) return 1;
	else return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//����ġ�� ��
	int answer = 0;

	//�� ������ �θ� ������ �������� �ʱⰪ ����
	for (int i = 0; i < 6; i++) {
		parent[i] = i;
	}

	//pair.first = ����ġ
	//pair.second.first, pair.second.second = �������� �̾��� a,b ����
	vector<pair<int, pair<int, int>>> edge;
	//���� ����
	edge.push_back({ 16, {0, 1 } });
	edge.push_back({ 21, {0, 2 } });
	edge.push_back({ 19, {0, 4 } });
	edge.push_back({ 11, {1, 2 } });
	edge.push_back({ 5, {1, 3 } });
	edge.push_back({ 6, {1, 5 } });
	edge.push_back({ 33, {2, 4 } });
	edge.push_back({ 14, {2, 5 } });
	edge.push_back({ 10, {3, 5 } });
	edge.push_back({ 18, {4, 5 } });

	//������ ����ġ ���� ������������ ����
	sort(edge.begin(), edge.end());

	cout << "���� ����\n";
	//��� ������ ����ġ�� ���� ������� �˻�
	for (int i = 0; i < edge.size(); i++) {
		//������ �� ������ ������� �ʾҴٸ� �� ������ ����
		if (!findParent(edge[i].second.first, edge[i].second.second)) {
			//����ġ�� �տ� ���� ������ ����ġ�� ����
			answer += edge[i].first;
			//������ �� ������ ����
			unionParent(edge[i].second.first, edge[i].second.second);
			cout << "����ġ : " << edge[i].first << " �� ���� : " << edge[i].second.first << ' ' << edge[i].second.second << '\n';
		}
	}
	cout <<"����ġ�� ��"<< answer;

	return 0;
}
