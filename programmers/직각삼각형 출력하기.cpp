#include <iostream>

using namespace std;

void star(int num)
{
    for(int i=0;i<=num;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
}

int main(void) {
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        star(i);
    }
    return 0;
}