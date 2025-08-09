#include <iostream>
#include <stack>

using namespace std;

const int PUSH_OPT_NUMBER = 1;
const int POP_OPT_NUMBER = 2;
const int PRINT_STACK_SIZE_OPT_NUMBER = 3;
const int CHECK_STACK_EMPTY_OPT_NUMBER = 4;
const int PRINT_PEEK_VALUE_OPT_NUMBER = 5;

stack<int> s;
int n, x;

void calculate(int optionNumber)
{
    if (optionNumber == POP_OPT_NUMBER)
    {
        if (!s.empty())
        {
            cout << s.top() << '\n';
            s.pop();
        }
        else
            cout << -1 << '\n';
    }
    else if (optionNumber == PRINT_STACK_SIZE_OPT_NUMBER)
    {
        cout << s.size() << '\n';
    }
    else if (optionNumber == CHECK_STACK_EMPTY_OPT_NUMBER)
    {
        if (s.empty())
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    else if (optionNumber == PRINT_PEEK_VALUE_OPT_NUMBER)
    {
        if (s.empty())
            cout << -1 << '\n';
        else
            cout << s.top() << '\n';
    }
}

void inputAndCalculate()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int optionNumber;
        cin >> optionNumber;
        if (optionNumber == PUSH_OPT_NUMBER)
        {
            cin >> x;
            s.push(x);
        }
        else
        {
            calculate(optionNumber);
        }
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
    optimizeInputAndOutput();
    inputAndCalculate();
}