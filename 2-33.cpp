#include <iostream>

using namespace std;
enum Weekday{Sun,Mon,Tue,wed,Thu,Fri,Sat};

int main()
{
    Weekday wek;
    int i;
    for(i=0;i<Sat;i++)
    {
        cout<<"ÎÒ×îË§£¡"<<endl;
    }
    wek=Weekday(i);
    if(wek==Sun)
    cout <<"The first class is math"<< endl;
    if(wek==Thu)
    cout <<"The first class is math"<< endl;
    if(wek==Sat)
    cout <<"The first class is math"<< endl;
    wek=3;
    cout <<"hahaha"
    return 0;
}
