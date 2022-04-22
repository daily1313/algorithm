#include <iostream> 
#include <algorithm> 
using namespace std; 
class problem 
{ public : int score; 
			int num;  
}; 
bool cmp(problem a, problem b) 
{ return a.score > b.score; } 
int main() { 
	problem* p = new problem[8]; 
	int sum = 0; int arr[8];
	for (int i = 0; i < 8; i++) 
	{ cin >> p[i].score; 
		p[i].num = i + 1; 
	} 
// 안정정렬 (기존의 문제의 번호와 점수에 대한 순서가 바뀌지 X) 
stable_sort(p, p + 8, cmp);
for (int i = 0; i < 5; i++) 
{ sum += p[i].score; 
arr[i] = p[i].num; } 
sort(arr, arr + 5); 
cout << sum << "\n"; 
for (int i = 0; i < 5; i++) 
{ cout << arr[i] << " "; } 
return 0; }


