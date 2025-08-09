#include <iostream>
#include <string>

using namespace std;

int main()
{
    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string str;
    int arr[3];
    long long res = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> str;
        for (int j = 0; j < 10; ++j)
        {
            if (color[j] == str)
            {
                arr[i] = j;
            }
        }
    }

    res = arr[0] * 10 + arr[1];
    for (int i = 0; i < arr[2]; i++)
    {
        res *= 10;
    }
    cout << res << endl;

    return 0;
}