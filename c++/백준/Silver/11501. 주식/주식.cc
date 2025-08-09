#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int stock;
            cin >> stock;
            v.push_back(stock);
        }
        unsigned long long res = 0;
        int check_index = v.size() - 1;
        int max_stock = -1;
        for (int i = check_index; i >= 0; i--)
        {
            if (v[i] < max_stock)
            {
                res += (max_stock - v[i]);
            }
            else
            {
                max_stock = v[i];
            }
        }
        cout << res << '\n';
        v.clear();
    }
}