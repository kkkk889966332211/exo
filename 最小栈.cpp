#include <iostream>
#include<stack>

using namespace std;

class Minstack {
public:
    stack <int> stack1,stack2;  //stack1�������ݣ�stack2��¼��Сֵ
    void push(int x)
    {
        stack1.push(x);
        if(stack2.empty())   stack2.push(x);
        else if(x<=stack2.top())  //�µ�xС��stack2����Сֵ����ջ����
            stack2.push(x);
    }
    void pop() {
        if(stack1.empty())
            return;
        if(stack1.top()==stack2.top())   stack2.pop();
        stack1.pop();
    }
    int peek() {
        return stack1.top();  //����ջ��
    }
    int getMin() {
        return stack2.top();  //������Сֵ

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
    cout <<"ջ��Ԫ�أ�"<<a.peek()<<endl;
    cout <<"��Сֵ:"<<a.getMin()<<endl;
    a.pop();
    a.pop();
    cout <<"ջ��Ԫ�أ�"<<a.peek()<<endl;
    cout <<"��Сֵ:"<<a.getMin()<<endl;
    return 0;
}
