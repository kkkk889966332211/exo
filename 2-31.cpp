#include <iostream>

using namespace std;

struct time{
    int year,month,day,hour,minute,second;
};
int main()
{
    time t;
    cout << "please input time:" << endl;
    cin >> t.year>>t.month>>t.day>>t.hour>>t.minute>>t.second;
    cout <<t.year<<"��"<<t.month<<"��"<<t.day<<"��";
    cout <<t.hour<<":"<<t.minute<<":"<<t.second;
    return 0;
}
