#include <iostream>

using namespace std;

int main(void)
{
    
    int A, B, C, M;
    int t = 0;
    int max_res = 0;
    int fatigue = 0;

    cin>>A>>B>>C>>M;

    while(t<24)
    {
        t++;

        if(fatigue + A <= M) 
        {
            max_res += B;
            fatigue += A;
        }
        else if(fatigue + A > M)
        {
            fatigue -= C;
            if(fatigue < 0) fatigue = 0;
        }
    }

    cout<< max_res<<'\n';
    return 0;
}