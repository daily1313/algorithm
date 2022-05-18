#include <string>
#include <vector>
#include <iostream>
using namespace std;
string num =" ";
int main()
{
	bool check = 0;
	int sum=0;
	string str;
	cin>>str;
	for(int i=0;i<=str.size();i++)
	{
		if(str[i]=='+'||str[i]=='-'||i==str.size())
		{
			if(check){
				sum-= stoi(num);
			}
			else{
				sum+= stoi(num);
			}
			
			if(str[i]=='-'){
				check = 1;
			}
			num=" ";	
		}
		else{
			num+=str[i];
		}
		
	}
	cout<<sum;
}
