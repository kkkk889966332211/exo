#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int>stk;//��ջ
    for(int i=0;i<50;i++){
        stk.push(i);//��1-50���ְ���˳��ŵ�ջ��
    }
    cout<<"ջ�Ĵ�С:"<<stk.size()<<endl;
    while(!stk.empty())//ֻҪջ�в��ǿյģ���ѭ��
    {
        cout<<stk.top()<<endl;//����ջ��
        stk.pop();//��ջ������һ����Ա
    }
    cout<<"ջ�Ĵ�С:"<<stk.size()<<endl;
    return 0;
}
