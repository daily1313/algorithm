#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s,p;
	cin>>s>>p;
	char *ptr = strstr((char*)s.c_str(),(char*)p.c_str());
	if(ptr != NULL) cout<<1<<'\n';
	else cout<<0<<'\n';
}
