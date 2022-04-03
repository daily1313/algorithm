#include <iostream>
using namespace std;

int main()
{
	int money;
	cin>>money;
	int change = 1000-money;
	cout<<change/500+change%500/100+change%500%100/50+change%500%100%50/10+change%500%100%10/5+change%500%100%10%5/1<<'\n';
}
