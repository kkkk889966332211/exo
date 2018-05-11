#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int>stk;//入栈
    for(int i=0;i<50;i++){
        stk.push(i);//将1-50数字按照顺序放到栈中
    }
    cout<<"栈的大小:"<<stk.size()<<endl;
    while(!stk.empty())//只要栈中不是空的，就循环
    {
        cout<<stk.top()<<endl;//返回栈顶
        stk.pop();//从栈顶弹出一个成员
    }
    cout<<"栈的大小:"<<stk.size()<<endl;
    return 0;
}
