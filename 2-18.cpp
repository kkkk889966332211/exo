#include <iostream>

using namespace std;

int main()
{
    cout <<"�˳�����ʾASCIIΪ32~127���ַ���"<<endl;
    int i;
    char A;
    for(i=32;i<=127;i++)
    {
        A=i;
        cout << A <<' ';
    }
    return 0;
}
