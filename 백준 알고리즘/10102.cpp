#include <iostream>
#include <string>
using namespace std;
int main()
{
	int v;
	cin>>v;
	string arr;
	cin>>arr;
	int cnta=0;
	int cntb=0;
	for(int i=0;i<v;i++)
	{
		if(arr[i]=='A'){
			cnta++;
		}
		else if(arr[i]=='B'){
			cntb++;
		}
	}
	if(cnta>cntb){
		cout<<"A"<<endl;
	}
	else if(cnta==cntb){
		cout<<"Tie"<<endl;
	}
	else{
		cout<<"B"<<endl;
	}
}
