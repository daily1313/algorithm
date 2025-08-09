#include <queue>
#include <iostream>
#include <cmath>

using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
//greater<pair<int,int>>=>first->second순으로 정렬 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x==0){
			if(!q.empty()){
				cout<<q.top().second<<'\n';
				q.pop();
			}
			else{
				cout<<0<<'\n';
			}
		}
		else{
			q.push({abs(x),x});
		} 
	}
}
