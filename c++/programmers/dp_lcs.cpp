#include <iostream>
#include <algorithm>

using namespace std;
int lcs(string arr1 , string arr2, int m, int n)
{
    int L[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0) L[i][j] = 0; // 길이가 0인 LCS
            else if(arr1[i-1] == arr2[j-1]) L[i][j] = L[i-1][j-1] + 1; // 마지막 문자 같은 경우
            else L[i][j] = max(L[i-1][j],L[i][j-1]); 
        }
    }
    return L[m][n];
}

int main()
{
    string a = "AGGTAB";
    string b = "GXTXAYB";

    cout<<lcs(a, b, a.size(),b.size());
}