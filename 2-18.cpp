#include <iostream>

using namespace std;

int main()
{
    cout <<"此程序显示ASCII为32~127的字符："<<endl;
    int i;
    char A;
    for(i=32;i<=127;i++)
    {
        A=i;
        cout << A <<' ';
    }
    return 0;
}
