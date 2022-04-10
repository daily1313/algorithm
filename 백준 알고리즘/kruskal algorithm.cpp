#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

//각 정점마다 하나의 부모(parent) 정점으로 연결됨을 표시한다.
int parent[6];

//정점에 연결된 부모 정점을 반환
int getParent(int x) {
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent[x]); // 연결되어있는 부모 정점을 반환하는 동시에, 연결되어있는 정점들의 부모 정점을 갱신 
}

//두 정점을 연결
void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	//a와 b중 부모 정점이 작은 쪽으로 합치기
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

//두 정점이 연결되어있는지 확인
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

	//가중치의 합
	int answer = 0;

	//각 정점의 부모 정점을 본인으로 초기값 설정
	for (int i = 0; i < 6; i++) {
		parent[i] = i;
	}

	//pair.first = 가중치
	//pair.second.first, pair.second.second = 간선으로 이어진 a,b 정점
	vector<pair<int, pair<int, int>>> edge;
	//간선 저장
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

	//간선을 가중치 기준 오름차순으로 정렬
	sort(edge.begin(), edge.end());

	cout << "사용된 간선\n";
	//모든 간선을 가중치가 낮은 순서대로 검사
	for (int i = 0; i < edge.size(); i++) {
		//간선의 두 정점이 연결되지 않았다면 두 정점을 연결
		if (!findParent(edge[i].second.first, edge[i].second.second)) {
			//가중치의 합에 사용된 간선의 가중치를 누적
			answer += edge[i].first;
			//간선의 두 정점을 연결
			unionParent(edge[i].second.first, edge[i].second.second);
			cout << "가중치 : " << edge[i].first << " 두 정점 : " << edge[i].second.first << ' ' << edge[i].second.second << '\n';
		}
	}
	cout <<"가중치의 합"<< answer;

	return 0;
}
