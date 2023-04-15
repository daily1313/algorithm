#include <iostream>

using namespace std;
int order = 0;
int quadrant[5] = {0};
int AXIS = 0;
int input_count;
void judgeCoordinate(int x_coordinate, int y_coordinate) 
{
    if(x_coordinate > 0 && y_coordinate > 0) {
        ++quadrant[1];
    }
    if(x_coordinate < 0 && y_coordinate > 0) {
        ++quadrant[2];
    }
    if(x_coordinate < 0 && y_coordinate < 0) {
        ++quadrant[3];
    }
    if(x_coordinate > 0 && y_coordinate < 0) {
        ++quadrant[4];
    }
    if(x_coordinate == 0|| y_coordinate == 0) {
        AXIS++;
    }
}
void getResult(int count)
{
    for(int i=1;i<=4;i++)
    {
        cout<<"Q"<<i<<": "<<quadrant[i]<<'\n';
    }
    cout<<"AXIS: "<<AXIS<<'\n';
}
void inputAndJudgeCoordinate(int input_count)
{
    for(int i=0;i<input_count;i++)
    {
        int number1, number2;
        cin>>number1>>number2;
        judgeCoordinate(number1, number2);
    }
}
int main()
{
    cin>>input_count;
    inputAndJudgeCoordinate(input_count);
    getResult(4);
    return 0;
}