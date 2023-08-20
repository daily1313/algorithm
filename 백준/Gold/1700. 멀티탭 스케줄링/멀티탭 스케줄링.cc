#include <iostream>

using namespace std;
int n, k;
int schedule[101];
int multitap[101] = {0};
int res = 0;
void optimizeInputAndOutput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void input()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> schedule[i];
    }
}
int getResult()
{
    for (int i = 0; i < k; i++)
    {
        bool check = false;
        for (int j = 0; j < n; j++)
        {
            if (multitap[j] == schedule[i] && !check)
            {
                check = true;
                break;
            }
        }
        if (check)
            continue;

        for (int j = 0; j < n; j++)
        {
            if (multitap[j] == 0 && !check)
            {
                multitap[j] = schedule[i];
                check = true;
            }
        }

        if (check)
            continue;

        int next = -1;
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            int tmp = 0;
            for (int m = i + 1; m < k; m++)
            {
                if (schedule[m] == multitap[j])
                {
                    break;
                }
                tmp++;
            }
            if (tmp > next)
            {
                next = tmp;
                idx = j;
            }
        }
        multitap[idx] = schedule[i];
        res++;
    }
    return res;
}
int main()
{
    optimizeInputAndOutput();
    input();
    cout<< getResult() << '\n';
}