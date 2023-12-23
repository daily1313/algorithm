#include <iostream>

using namespace std;

int now[1000001];
int before[1000001];
int x;

int getMinCount()
{
    now[1] = 0;
    for (int i = 2; i <= x; i++)
    {
        now[i] = now[i - 1] + 1;
        before[i] = i - 1;

        if (i % 3 == 0 && now[i] > now[i / 3] + 1)
        {
            now[i] = now[i / 3] + 1;
            before[i] = i / 3;
        }
        if (i % 2 == 0 && now[i] > now[i / 2] + 1)
        {
            now[i] = now[i / 2] + 1;
            before[i] = i / 2;
        }
    }
    return now[x];
}

void getResult()
{
    cout << getMinCount() << '\n';

    if(x == 1) {
        cout << 1 << ' ';
        return;
    }
    
    while (x)
    {
        cout << x << ' ';
        x = before[x];
        if(x == 0) break;
    }
}

void optimizeInputAndOutput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    cin>>x;
    optimizeInputAndOutput();
    getResult();
    return 0;
}