#include <iostream>
#include <vector>

using namespace std;
int Parent[51];
vector<int> t;
vector<int> people[51];

int findParent(int x)
{
    if(x == Parent[x]) return x;
    else return Parent[x] = findParent(Parent[x]);
}
void unionParent(int x, int y)
{
    x = findParent(x);
    y = findParent(y);
    Parent[y] = x;
}
bool isUnion(int x, int y)
{
	x = findParent(x);
	y = findParent(y);
	if (x == y) return true;
	else return false;
}
// union_find 알고리즘 진실을 알고 있는 사람과 연관이 있는지 check하기 위해 union_find 알고리즘 적용
int main()
{
    int n,m;
    cin>>n>>m;
    int truthCnt, peopleCnt;
    cin>>truthCnt;
    for (int i = 0; i < truthCnt; i++)
    {
        int truth;
        cin>>truth;
        t.push_back(truth);
    }
    // 진실을 아는 사람
    for (int i = 0; i < m; i++)
	{
        int number;
		cin >> number;
		for (int j = 0; j < number; j++)
		{
            int order;
			cin >> order;
			people[i].push_back(order);
		}
	}
    //연관관계 매핑, n번파티의 참여한 사람의 번호 order push
    

    for (int i = 1; i <= n; i++)
	{
		Parent[i] = i;
	}
    //부모 테이블 초기화

    for (int i = 0; i < m; i++)
	{
		int first_participant = people[i][0];
		for (int j = 1; j < people[i].size(); j++)
		{
			int participant = people[i][j];
			unionParent(first_participant, participant);
		}
	}
    int ans = 0;
    for (int i = 0; i < m; i++)
	{
		bool check = false;
		for (int j = 0; j < people[i].size(); j++)
		{
			if (check) break;
			int check_people = people[i][j];
			for (int k = 0; k < t.size(); k++)
			{
				int truth_people = t[k];
				if (isUnion(check_people, truth_people))
				{
					check = true;
					break;
				}
			}
		}
		if (!check) ans++;
	}
	cout << ans;

    return 0;

}