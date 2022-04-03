#include <iostream>
using namespace std;
int time[21];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>time[i];
	}
	int sumy=0;
	int summ=0;
	for(int i=0;i<n;i++){
		sumy+=10+10*(time[i]/30);
		summ+=15+15*(time[i]/60);
	}
	if(sumy>summ){
		cout<<"M"<<' '<<summ<<'\n';
	}
	else if(summ==sumy){
		cout<<"Y M"<<' '<<summ<<'\n';
	}
	else{
		cout<<"Y"<<' '<<sumy<<'\n';
	}
}
