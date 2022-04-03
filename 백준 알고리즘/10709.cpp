#include <iostream>
#include <cstring>
using namespace std;
char cloud[101][101];
int result[101][101];
int main()
{
	int n,m;
	cin>>n>>m;
	memset(result, -1, sizeof(result));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>cloud[i][j];
		}
	}
		for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            if (cloud[i][j] == 'c')
            {
                result[i][j] = 0;
            }
            else if (result[i][j-1] >= 0)
            {
                result[i][j] = result[i][j-1] + 1;
            }

        }
    }
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<result[i][j]<<' ';
		}
		cout<<'\n';
	}
}
