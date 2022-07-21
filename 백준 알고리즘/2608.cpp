#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;  
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='I'){
			if(a[i+1]=='V'){
				sum+=4;
				i++;
				continue;
			}
			else if(a[i+1]=='X'){
				sum+=9;
				i++;
				continue;
			}
			else sum+=1;
		}
		else if(a[i]=='V') sum+=5;
		else if(a[i]=='X'){
			if(a[i+1]=='L'){
				sum+=40;
				i++;
				continue;
			}
			else if(a[i+1]=='C'){
				sum+=90;
				i++;
				continue;
			}
			else sum+=10;
		}
		else if(a[i]=='L') sum+=50;	
		else if(a[i]=='C'){
			if(a[i+1]=='D'){
				sum+=400;
				i++;
			}
			else if(a[i+1]=='M'){
				sum+=900;
				i++;
				continue;
			}
			else sum+=100;
		}
		else if(a[i]=='D') sum+=500;	
		else if(a[i]=='M') sum+=1000;		
	}
	if(sum>2000) return 0;
	for(int i=0;i<b.size();i++)
	{
		if(b[i]=='I'){
			if(b[i+1]=='V'){
				sum+=4;
				i++;
				continue;
			}
			else if(b[i+1]=='X'){
				sum+=9;
				i++;
				continue;
			}
			else sum+=1;
		}
		else if(b[i]=='V') sum+=5;
		else if(b[i]=='X'){
			if(b[i+1]=='L'){
				sum+=40;
				i++;
				continue;
			}
			else if(b[i+1]=='C'){
				sum+=90;
				i++;
				continue;
			}
			else sum+=10;
		}	
		else if(b[i]=='L') sum+=50;	
		else if(b[i]=='C'){
			if(b[i+1]=='D'){
				sum+=400;
				i++;
				continue;
			}
			else if(b[i+1]=='M'){
				sum+=900;
				i++;
				continue;
			}
			else sum+=100;
		}	
		else if(b[i]=='D') sum+=500;	
		else if(b[i]=='M') sum+=1000;		
	}
	if(sum>4000) return 0;
	cout<<sum<<'\n';
	string s="";
	while(sum)
	{
		if(sum/1000)
		{ 
			for(int i=0;i<sum/1000;i++){
				s+="M";	
			}
			sum=sum%1000;
		}
		if(sum/900)
		{ 
			for(int i=0;i<sum/900;i++){
				s+="CM";	
			}
			sum=sum%900;
		}
		if(sum/500)
		{ 
			for(int i=0;i<sum/500;i++){
				s+="D";	
			}
			sum=sum%500;
		}
		if(sum/400)
		{ 
			for(int i=0;i<sum/400;i++){
				s+="CD";	
			}
			sum=sum%400;
		}
		if(sum/100)
		{ 
			for(int i=0;i<sum/100;i++){
				s+="C";	
			}
			sum=sum%100;
		}
		if(sum/90)
		{ 
			for(int i=0;i<sum/90;i++){
				s+="XC";	
			}
			sum=sum%90;
		}
		if(sum/50)
		{ 
			for(int i=0;i<sum/50;i++){
				s+="L";	
			}
			sum=sum%50;
		}
		if(sum/40)
		{ 
			for(int i=0;i<sum/40;i++){
				s+="XL";	
			}
			sum=sum%40;
		}
		if(sum/10)
		{ 
			for(int i=0;i<sum/10;i++){
				s+="X";	
			}
			sum=sum%10;
		}
		if(sum/9)
		{ 
			for(int i=0;i<sum/9;i++){
				s+="IX";	
			}
			sum=sum%9;
		}
		if(sum/4)
		{ 
			for(int i=0;i<sum/4;i++){
				s+="IV";	
			}
			sum=sum%4;
		}
		if(sum/1)
		{ 
			for(int i=0;i<sum/1;i++){
				s+="I";	
			}
			sum=sum%1;
		}
		
		
		
	}
	cout<<s<<'\n';	
}
