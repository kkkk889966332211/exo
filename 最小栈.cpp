#include <iostream>
#include<stack>

using namespace std;

class Minstack {
public:
    stack <int> stack1,stack2;  //stack1存入数据，stack2记录最小值
    void push(int x)
    {
        stack1.push(x);
        if(stack2.empty())   stack2.push(x);
        else if(x<=stack2.top())  //新的x小于stack2的最小值（即栈顶）
            stack2.push(x);
    }
    void pop() {
        if(stack1.empty())
            return;
        if(stack1.top()==stack2.top())   stack2.pop();
        stack1.pop();
    }
    int peek() {
        return stack1.top();  //返回栈顶
    }
    int getMin() {
        return stack2.top();  //返回最小值

    }
};

int main()
{
    Minstack a;
    a.push(1);
    a.push(3);
    a.push(-1);
    a.push(4);
    a.push(-3);
    a.push(-5);
    a.push(2);
    cout <<"栈顶元素："<<a.peek()<<endl;
    cout <<"最小值:"<<a.getMin()<<endl;
    a.pop();
    a.pop();
    cout <<"栈顶元素："<<a.peek()<<endl;
    cout <<"最小值:"<<a.getMin()<<endl;
    return 0;
}
