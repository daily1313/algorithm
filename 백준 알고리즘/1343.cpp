#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	string result;
	cin>>str;
	str += ' ';
	int number=0;
	for(int i=0;i<str.size()-1;i++)
	{
		
		if(str[i]=='X'){
			number++;
		}
		
		if(str[i]=='.'){
			result+=".";
			if(number%2==1){
				break;
			}
			else{
				number=0;
			}
		}
		if(number==2 && str[i+1]!='X'){
			result+="BB";
			number=0;
		}
		else if(number==4){
			result+="AAAA";
			number=0;
		}
	}
	if(number%2==1) cout<<-1;
	else cout<<result;
}
