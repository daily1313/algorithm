#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string input_num;
    int max_num;
    cin >> input_num >> max_num;
    int ans = -1;
    sort(input_num.begin(), input_num.end());

    do
    {
        int c = stoi(input_num);
        if (input_num[0] != '0' && c < max_num)
        {
            if (ans == -1 || ans < c)
            {
                ans = c;
            }
        }
    } while (next_permutation(input_num.begin(), input_num.end()));

    cout << ans << '\n';
}