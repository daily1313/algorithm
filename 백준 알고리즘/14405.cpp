#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	string arr;
	cin>>arr;
	for(int i=0;i<arr.size();i++)
	{
		if((arr[i]=='p' && arr[i+1]=='i') || (arr[i]=='k' && arr[i+1]=='a')){
			i+=1;
		}
		else if(arr[i]=='c'&&arr[i+1]=='h'&&arr[i+2]=='u'){
			i+=2;
		}
		else{
			cout<<"NO"<<'\n';
			return 0;
		}
	}
	cout<<"YES"<<'\n';
	return 0;
}
