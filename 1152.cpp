#include <iostream>
#include <cstring>

using namespace std;
char str[1000001];
int main()
{
	 
	cin.getline(str, 1000001);
	int i;
	int count=0;
	for(i=0;i<strlen(str);i++){
			if(str[i]==' '){
				count++;
			}
		}
	if(str[0]==' ' && str[strlen(str)-1]==' ') cout<<count-1<<endl;
	else if(str[0]!=' ' && str[strlen(str)-1]==' ') cout<<count<<endl;
	else if(str[0]==' ' && str[strlen(str)-1]!=' ') cout<<count<<endl;
	else cout<<count+1<<endl;
}
