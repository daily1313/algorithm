#include <iostream>
#include <string>
using namespace std;
int main()
{
	string arr;
	while(1){
	getline(cin,arr);
	if(arr == "0"){
		return 0;
	}
	if(arr.size()==1){
		cout<<"yes"<<endl;
	}
	
			for(int j=0;j<arr.size()/2;j++){
				if(arr[j]!=arr[arr.size()-1-j]){
					cout<<"no"<<endl;
					break;
				}
				
				if(j==arr.size()/2-1){
					if(arr[j]==arr[arr.size()-1-j]){
					cout<<"yes"<<endl;
				}
				}
			}
	}
}
