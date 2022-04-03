#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char name[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	cin>>name;
	int count[26] ={0};
	int cnt=0;
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z'};
	int len = strlen(name);
	for(i=0;i<len;i++)
	{
		for(j=0;j<26;j++){
			if(name[i] == alpha[j] || name[i] == alpha[j]-32){
				count[j]++;
			}	
		}
	}
	int result = *max_element(count, count+26);
	int k;
	char al;
	for(k=0;k<26;k++){
		if(count[k]==result){
			result = count[k];
			al = alpha[k]-32;
			cnt++;
		}
	
	}		
	if(cnt==1){
		cout<<al;
	}
	else {
		cout<<"?";
	}

}
	
	
	

