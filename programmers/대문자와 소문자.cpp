#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i=0;i<my_string.size();i++)
    {
        if(islower(my_string[i]))
        {
            my_string[i] = toupper(my_string[i]);
        }
        else if(isupper(my_string[i]))
        {
            my_string[i] = tolower(my_string[i]);
        }
    }
    return my_string;
}