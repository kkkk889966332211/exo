#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "你考试考了多少分？（1~100）" << endl;
    cin>>grade;
    if(90<=grade&&grade<=100)
    {
        cout <<"优"<<endl;
    }
    else if(80<=grade&&grade<90)
    {
        cout <<"良"<<endl;
    }
    else if(60<=grade&&grade<80)
    {
        cout <<"中"<<endl;
    }
    else
    {
        cout <<"差"<<endl;
    }
    return 0;
}
