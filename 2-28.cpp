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
        cout << "数据已经增加";
        break;
    case 'D':
        cout << "数据已经删除";
        break;
    case 'S':
        cout << "数据已经排序";
        break;
    case 'Q':
        return 0;
    }
    return 0;
}
