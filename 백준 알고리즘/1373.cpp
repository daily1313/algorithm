#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	 string s;
	 cin>>s;
	 int n = s.size();
	 if(n%3==1) cout<<s[0]; // MSB를 의미 : 가장 왼쪽 비트 
	 else if(n%3==2) cout<<(s[0]-'0')*2+s[1]-'0';//MSB와, 그 다음 비트 의미 
	 for(int i=n%3;i<n;i+=3)
	 {
	 cout<<(s[i]-'0')*4+(s[i+1]-'0')*2+(s[i+2]-'0');
	 }
}
