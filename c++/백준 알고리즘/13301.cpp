#include <iostream>
using namespace std;
unsigned long long diameter[81];
int main()

{
	int n;
	diameter[0] = 4;
	diameter[1] = 6; 
	cin>>n;
	for(int i=2;i<n;i++){
		diameter[i] = diameter[i-1] + diameter[i-2];
	}
	cout<<diameter[n-1]<<endl;
}
