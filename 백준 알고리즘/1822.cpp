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
		// B�� ���Ұ� A�� �ִ��� Ȯ�� 
		if(check==s.end()){
			continue;
		} // ������ �������� Ȯ�� 
		else{
			s.erase(check); 
		} // ������ ���� 
	}
	cout<<s.size()<<'\n';
	for(auto setA: s){
		cout<< setA<<' ';
	} 
	cout<<'\n';
 } 
