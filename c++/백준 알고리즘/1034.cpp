#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

char lamp[51][51];

int main()
{
    int n, m;
    cin>>n>>m;
    // 행, 열의 개수
    for(int i=0;i<n;i++)
    {
        string input;
        cin>>input;
        for(int j=0;j<m;j++)
        {
            lamp[i][j] = input[j] - '0';
        }

    }
    int k;
    cin>>k;

   

}