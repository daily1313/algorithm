#include <string>
#include <vector>

using namespace std;

unsigned long long solution(string number) {
    unsigned long long answer = 0;
    for(int i=0;i<number.size();i++)
    {
        if(number[i]=='z') 
        {
            answer=(answer * 10) + 0;
            i+=3;
        }
        else if(number[i]=='o')
        {
            answer=(answer * 10) + 1;
            i+=2;
        }
        else if(number[i]=='t' && number[i+1] == 'w')
        {
            answer=(answer * 10) + 2;
            i+=2;
        }
        else if(number[i]=='t' && number[i+1] == 'h')
        {
            answer=(answer * 10) + 3;
            i+=4;
        }
        else if(number[i]=='f' && number[i+1] == 'o')
        {
            answer=(answer * 10) + 4;
            i+=3;
        }
        else if(number[i]=='f' && number[i+1] == 'i')
        {
            answer=(answer * 10) + 5;
            i+=3;
        }
        else if(number[i]=='s' && number[i+1] == 'i')
        {
             answer=(answer * 10) + 6;
            i+=2;
        }
        else if(number[i]=='s' && number[i+1] == 'e')
        {
            answer=(answer * 10) + 7;
            i+=4;
        }
        else if(number[i]=='e' && number[i+1] == 'i')
        {
            answer=(answer * 10) + 8;
            i+=4;
        }
        else if(number[i]=='n' && number[i+1] == 'i')
        {
            answer=(answer * 10)+9;
            i+=3;
        }
    }
    return answer;
}