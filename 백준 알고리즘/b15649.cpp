#include <iostream>

using namespace std;
int n,m; // 사용할 숫자 1 ~ n, 출력 숫자 개수 m 
int arr[10]={0}; //출력 배열 
bool isused[10]={false};//배열이 사용되었는지 check  
void func(int k){
	if(k==m){
		for(int i=0;i<m;i++)
		{
			cout<<arr[i]<<' ';
		}
		cout<<'\n';
		return;
		//return을 만나면 함수 출력 후 다시 이전 단계로 넘어감
		//ex) func(3) => k==m이기에 배열 출력하고 
		//다시 func(2)로 돌아가게 된다. 
		//123 출력하고 func(3)으로 넘어가면 isused[3]=false가 되기에
		//124를 출력하게 된다. 
	}
	for(int i=1;i<=n;i++)
	{
		if(!isused[i]){
			arr[k]=i;
			isused[i]=true;
			func(k+1);
			isused[i]=false;
		}
	}
	//전형적인 백트래킹 방식  
}

int main()
{
	cin>>n>>m;
	func(0);
}
