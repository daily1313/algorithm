#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 100;
    int min;
    sort(array.begin(),array.end());
    for(int i=array.size()-1;i>=0;i--)
    {
        if(abs(array[i]-n)<=answer) 
        {
            answer = abs(array[i]-n);
            min = array[i];
        }
    }
    return min;
}