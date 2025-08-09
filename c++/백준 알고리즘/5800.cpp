#include <iostream>
#include <algorithm>
using namespace std;
int score[51];
int gap[51];
int main()
{
	int n;
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>score[j];
		}
		int max = *max_element(score,score+n); 
		int min = *min_element(score,score+n);
		cout<<"Class"<<' '<<i+1<<'\n';
		cout<<"Max "<<max<<", Min "<<min<<", ";
		sort(score,score+n);
		int num=0;
		for(int a=n-1;a>=1;a--){
			gap[num]=score[a]-score[a-1];
			num++;
		}
		int max2 = *max_element(gap,gap+num); 
		cout<<"Largest gap "<<max2<<'\n';
	}
	
}
