#include <iostream>
#include <algorithm>
using namespace std;

long long A, B; 
long long answer=10000000;

void dfs(long long cur, long long depth){
    if(B<cur) {return;}
    
    if(cur==B){
        answer= min(answer, depth); 
		return;
    }
    
    dfs(cur*2, depth+1);
    dfs((cur*10)+1, depth +1);
}
int main(){
    cin>>A>>B;
    dfs(A,1);
    
    cout<<(answer==10000000 ? -1:answer)<<"\n";
    return 0;
}
