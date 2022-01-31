#include <iostream>
using namespace std;
int dp[21][21][21];
int w(int a,int b,int c);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==-1 && b==-1 && c==-1){
			return 0;
		}
			cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	
		
	}
}
int w(int a,int b,int c)
{
	int &result = dp[a][b][c];
	if (dp[a][b][c] != 0) {
		return dp[a][b][c];
		}
	if(a<=0 || b<=0 || c<=0){
		return 1;
	}
	else if(a>20 || b>20 || c>20){
		
		return result = w(20,20,20);
	}
	else if(a<b && b<c){
	
		result = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	}
	else{
		
		result =w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	return result;
}
