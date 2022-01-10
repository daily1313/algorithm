#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[16];
	int i,j,k;
	int count;
	int sum=0;
	cin>>name;
	for(i=0;i<strlen(name);i++){
		if(name[i] == 'A' || name[i] == 'B' || name[i]== 'C'){
			count=3;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'D' || name[i] == 'E' || name[i]== 'F'){
			count=4;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'G' || name[i] == 'H' || name[i]== 'I'){
			count=5;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'J' || name[i] == 'K' || name[i]== 'L'){
			count=6;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'M' || name[i] == 'N' || name[i]== 'O'){
			count=7;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'P' || name[i] == 'Q' || name[i]== 'R' || name[i] == 'S'){
			count=8;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'T' || name[i] == 'U' || name[i]== 'V'){
			count=9;
			sum+=count;
			continue;	
		}
		else if(name[i] == 'W' || name[i] == 'X' || name[i]== 'Y' || name[i] == 'Z'){
			count=10;
			sum+=count;
			continue;	
		}
		
	}
	cout<<sum<<endl;
	
}
