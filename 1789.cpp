#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long int sum=0;
	unsigned long long int s;
	cin>>s;
	unsigned long long int i=1;
	int cnt=0;
	while(sum<s){
		sum+=i;
		i++;
		cnt++;
		if(sum>s){
			cnt--;
			cout<<cnt<<'\n';
			return 0;
		}
		else if(sum==s){
			cout<<cnt<<'\n';
			return 0;
		}
		
	}
}
