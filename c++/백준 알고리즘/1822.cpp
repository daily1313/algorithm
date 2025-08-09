#include <iostream>
#include <set>
using namespace std;

set<int>s;
set<int>check;

int main(void)
{
	int setA,setB;
	int A,B;
	cin>>A>>B;
	
	for(int i=0;i<A;i++){
		cin>>setA;
		s.insert(setA);
	}
	for(int i=0;i<B;i++){
		cin>>setB;
		auto check = s.find(setB);
		// B의 원소가 A에 있는지 확인 
		if(check==s.end()){
			continue;
		} // 없으면 다음원소 확인 
		else{
			s.erase(check); 
		} // 있으면 제거 
	}
	cout<<s.size()<<'\n';
	for(auto setA: s){
		cout<< setA<<' ';
	} 
	cout<<'\n';
 } 
