#include <iostream>

using namespace std;
int n,m; // ����� ���� 1 ~ n, ��� ���� ���� m 
int arr[10]={0}; //��� �迭 
bool isused[10]={false};//�迭�� ���Ǿ����� check  
void func(int k){
	if(k==m){
		for(int i=0;i<m;i++)
		{
			cout<<arr[i]<<' ';
		}
		cout<<'\n';
		return;
		//return�� ������ �Լ� ��� �� �ٽ� ���� �ܰ�� �Ѿ
		//ex) func(3) => k==m�̱⿡ �迭 ����ϰ� 
		//�ٽ� func(2)�� ���ư��� �ȴ�. 
		//123 ����ϰ� func(3)���� �Ѿ�� isused[3]=false�� �Ǳ⿡
		//124�� ����ϰ� �ȴ�. 
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
	//�������� ��Ʈ��ŷ ���  
}

int main()
{
	cin>>n>>m;
	func(0);
}
