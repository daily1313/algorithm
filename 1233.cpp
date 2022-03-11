#include <iostream>
#include <algorithm>
using namespace std;
int cnt[81] = {0};
int main()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				++cnt[i+j+k];
			}
		}
	}
	int max = cnt[0];
	int num = 0;
	for(int i=0;i<s1+s2+s3;i++){
		if(max<cnt[i]){
			max = cnt[i];
			num = i;
		}
	} 
	cout<<num<<'\n';
}
