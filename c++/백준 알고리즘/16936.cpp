#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(pair<int,long long> &p1, pair<int,long long> &p2) {
    if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int, long long>> a(n); // 3의 개수, 실제 수
    for(int i=0;i<n;i++) {
        long long num;
        cin>>num;
        a[i].second = num;
        while(num % 3 ==  0) {
            num /= 3;
            a[i].first += 1;
        }
    }

    sort(a.begin(),a.end(),cmp);

    for(int i=0;i<n;i++) {
        cout<<a[i].second<<' ';
    }
}