#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr;
	char alpha[1];
	while(1)
	{
		cin>>alpha[0];
		if(alpha[0]=='#'){
			return 0;
		}
		getline(cin,arr);
		int cnt=0;
		for(int i=0;i<arr.size();i++)
		{
			if(alpha[0]==arr[i] || alpha[0]-32==arr[i]){
				cnt++;
			}
		}
		cout<<alpha[0]<<' '<<cnt<<'\n';
	}
}
