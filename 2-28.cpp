#include <iostream>

using namespace std;

int main()
{
    char answer;
    cout << "Menu:A(dd) D(elete) S(ort) Q(uit),Select one:" << endl;
    cin >> answer;
    switch(answer)
    {
    case 'A':
        cout << "�����Ѿ�����";
        break;
    case 'D':
        cout << "�����Ѿ�ɾ��";
        break;
    case 'S':
        cout << "�����Ѿ�����";
        break;
    case 'Q':
        return 0;
    }
    return 0;
}
