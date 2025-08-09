#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 연산의 최대 경우의 수 10! / 3! * 3! * 2! * 2! = 2520, 왜냐하면 중복순열이기 때문이다.(겹치는 경우 동일하게 처리)
int calc(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] == 0)
        {
            ans += a[i];
        }
        else if (b[i - 1] == 1)
        {
            ans -= a[i];
        }
        else if (b[i - 1] == 2)
        {
            ans *= a[i];
        }
        else if (b[i - 1] == 3)
        {
            ans /= a[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // 모든 수 입력 받기
    vector<int> b;
    for (int i = 0; i < 4; i++)
    {
        int cnt;
        cin >> cnt;
        for (int k = 0; k < cnt; k++)
        {
            b.push_back(i);
        }
    }
    // +(0), -(1), X(2), %(3)
    sort(b.begin(), b.end());
    vector<int> result;
    do
    {
        int temp = calc(a, b);
        result.push_back(temp);
    } while (next_permutation(b.begin(), b.end()));

    auto ans = minmax_element(result.begin(), result.end());
    cout << *ans.second << '\n';
    cout << *ans.first << '\n';
    return 0;
}