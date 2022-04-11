#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> V;
int num[10001];

int main(){
	int n;
	cin>>n;
	int size=n;
	int sum=0;
	int M,m;
	m=4001;
	M =-4001;
	while(n--){
		int a;
		cin>>a;
		sum+=a;
		if(a<m)m=a;
		if(a>M)M=a;
		num[a+4000]++;
		V.push_back(a);
	}
	int result = *max_element(num,num+10001);
	int rep;
	int cnt=0;
	for(int i=0;i<10001;i++){
		if(cnt==2) break;
		if(num[i]==result){
			rep=i;
			cnt++;
		}
	}
	rep-=4000;
	sort(V.begin(),V.end());
	cout<<round((double)(sum/size))<<'\n';
	cout<<V[size/2]<<'\n';
	cout<<rep<<'\n';
	cout<<M-m<<'\n';	
	
}
