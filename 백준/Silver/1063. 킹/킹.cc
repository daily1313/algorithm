#include <iostream>
#include <string>

#define FASTio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std; 
string s[8] = { "R","L","B","T","RT","LT","RB","LB" };
int dx[8] = {1,-1,0,0,1,-1,1,-1};
int dy[8] = {0,0,-1,1,1,1,-1,-1};
int main()
{
	FASTio;
	string k,r;
    string input;
	int kx,ky,rx,ry;
	int n;
	cin >> k >>r>>n;
	kx = k[0] - 'A' + 1;
	ky = k[1] - '0';
	rx = r[0] - 'A' + 1;
	ry = r[1] - '0';

	while (n--) 
    {
		cin >> input;
		for (int i = 0; i < 8; i++) 
        {
			if (input == s[i]) 
            {
				int mx = kx + dx[i];
				int my = ky + dy[i];
				if (mx <= 0 || my <= 0 || mx >= 9 || my >= 9) break; 
				if (mx == rx && my == ry) 
                { 
					int rrx = rx + dx[i];
					int rry = ry + dy[i];
					if (rrx <= 0 || rry <= 0 || rrx >= 9 || rry >= 9) break; 
					rx += dx[i]; 
					ry += dy[i]; 
				}
				kx += dx[i]; 
				ky += dy[i];
			}
		}
	}
	cout << (char)(kx+'A'-1) << ky << "\n" << (char)(rx+'A'-1) << ry;
}