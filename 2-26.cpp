#include <iostream>

using namespace std;

int main()
{
    char answer;
    cout << "Is raining now?" << endl;
    cin>>answer;
    if(answer=='Y')
    {
        cout<<"现在在下雨！"<<endl;
    }
    else
    {
        cout <<"现在没有下雨！"<<endl;
    }
    return 0;
}
