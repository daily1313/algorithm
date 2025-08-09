#include <bits/stdc++.h>

using namespace std;

int V, E; // 노드의 개수(V), 간선(union 연산)의 개수(E)
int parent[100001]; // 부모 테이블 초기화
vector<pair<int, pair<int,int>>> edges;
// 모든 간선을 담을 ㄷ리스트와, 최종 비용을 담을 변수
int result = 0;

// 특정 원소가 속한 집합을 찾기
int findParent(int x)
{
    // 루트 노드가 아니라면, 루트 노드를 찾을 때 까지 재귀적으로 호출
    if(x == parent[x]) return x;
    // 경로 압축
    return parent[x] = findParent(parent[x]); 
    
}
// 두 원소가 속한 집합을 합치기
void unionParent(int a, int b)
{
    a = findParent(a);
    b = findParent(b);
    if(a < b) parent[b] = a; // 더 작은 번호(루트 노드)가 더 큰 번호(노드)를 가리키도록
    else parent[a] = b;
}

int main()
{
    cin>>V>>E;

    // 부모 테이블 초기화 
	for(int i = 1; i <= V; i++){
		parent[i] = i;
	}

    for(int i=0; i<E; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        // 비용순으로 정렬하기 위해 튜플의 첫 번째 원소를 비용으로 설정
        edges.push_back({cost,{a,b}});
    }
    
    // 간선을 비용순으로 정렬
    sort(edges.begin(),edges.end());

    for(int i=0;i<edges.size();i++)
    {
        int cost = edges[i].first;
        int a = edges[i].second.first;
        int b = edges[i].second.second;
        // 사이클이 발생하지 않는 경우에만 집합에 포함
        if(findParent(a) != findParent(b))
        {
            unionParent(a, b);
            result += cost;
        }
    }
    cout<<result<<'\n';
}