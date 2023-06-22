#include <iostream>
#include <deque>
#include <queue>

// 톱니바퀴 N극, S극 왼쪽 -> 오른쪽
// K번 회번, 시계 방향 반시계 방향
// 회전시켰을때 맞닿은 톱니의 극이 다르면 반대방향으로 움직이게 됨
// 비교해줘야 할 인덱스
// 1번 톱니바퀴 : 2, 2번 톱니바퀴 : 2, 6, 3번 톱니바퀴 : 2, 6, 4번 톱니바퀴 : 6
// 1번 : 12시 방향이 N극이면 0점, S극이면 1점
// 2번 : 12시 방향이 N극이면 0점, S극이면 2점
// 3번 : 12시 방향이 N극이면 0점, S극이면 4점
// 4번 : 12시 방향이 N극이면 0점, S극이면 8점

using namespace std;

deque<char> gear[5];

int dir[4] = {0};
const int CLOCKWISE = 1;
const int COUNTER_CLOCKWISE = -1;
int number, direction;
int main()
{
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        string magnet_pole;
        cin >> magnet_pole;
        for (int j = 0; j < magnet_pole.size(); j++)
        {
            gear[i].push_back(magnet_pole[j]);
        }
    }
    int k;

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> number >> direction;
        int start = number - 1;
        int rotate = direction;
        queue<pair<int, int>> q;
        q.push({start, rotate});

        while (1)
        {
            if (start == 3)
                break;
            start++;
            rotate *= -1;
            if (gear[start - 1][2] != gear[start][6])
            {
                q.push({start, rotate});
            }
            else
                break;
        }

        start = number - 1;
        rotate = direction;

        while (1)
        {
            if (start == 0)
                break;
            start--;
            rotate *= -1;
            if (gear[start + 1][6] != gear[start][2])
            {
                q.push({start, rotate});
            }
            else
                break;
        }
        while (!q.empty())
        {
            int now = q.front().first;
            int direct = q.front().second;
            q.pop();
            if (direct == CLOCKWISE)
            {
                // 시계 (가장 뒤에 요소 (가장 앞으로 이동))
                char move_factor = gear[now].back();
                gear[now].pop_back();
                gear[now].push_front(move_factor);
            }
            else
            {
                // 반시계 (가장 앞의 요소 (가장 뒤로 이동))
                char move_factor = gear[now].front();
                gear[now].pop_front();
                gear[now].push_back(move_factor);
            }
        }
    }
    int mul = 1;
    for (int i = 0; i < 4; i++)
    {
        if (gear[i][0] == '1')
        {
            res += mul;
        }
        mul *= 2;
    }

    cout << res;
}