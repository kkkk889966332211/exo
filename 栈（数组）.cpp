#include <iostream>

using namespace std;

class MyStack
{
public:
    MyStack(int size);    //初始化栈空间
    ~MyStack();//回收栈空间内存
    void clearStack();//清空栈
    bool stackEmpty();//判空栈，若空返回true
    bool stackFull();//判满栈，若满返回true
    int stackLength();//栈中元素个数
    bool push(char elem);//元素入栈，栈顶上升
    bool pop(char &elem);//元素出栈，栈顶下降
    void stackTraverse(bool isFromBottom);//遍历栈中元素 isFromBottom=1，从栈底遍历
private:
    char *m_pBuffer;//栈空间指针
    int m_isize;//栈容量
    int m_itop;//栈顶，也是栈中元素个数
};

MyStack::MyStack(int size)
{
    m_isize = size;
    m_pBuffer = new char[size];
    m_itop = 0;
}

MyStack::~MyStack()
{
    delete[] m_pBuffer;
}

void MyStack::clearStack()
{
    m_itop = 0;
}

bool MyStack::stackEmpty()
{
    return 0 == m_itop ? true : false;  //判断栈顶是否为0，是返回true,不是返回false;
}

bool MyStack::stackFull()
{
    return m_isize == m_itop ? true : false;
}

int MyStack::stackLength()
{
    return m_itop;   //返回栈顶，也就是栈中元素个数
}

bool MyStack::push(char elem)
{
    if (stackFull())  //判满栈，若满返回true，执行if语句，不往栈中压
    {
        return false;
    }
    m_pBuffer[m_itop] = elem;  //将元素压入栈，放置在栈顶
    m_itop++; //栈的容量增加1；
    return true;  //表示入栈成功
}

bool MyStack::pop(char &elem)
{
    if (stackEmpty())  //判空栈，若空返回true，执行if语句
    {
        return false;  //因为为空，无元素可以出栈
    }
    m_itop--; //栈的容量减小1，释放栈顶元素
    elem = m_pBuffer[m_itop];
    return true;  //出栈成功
}

void MyStack::stackTraverse(bool isFromBottom)  //遍历栈中元素 isFromBottom=1，从栈底遍历
{
    if (isFromBottom)
    {
        for (int i = 0; i < m_itop; i++)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
    else
    {
        for (int i = m_itop-1; i >= 0; i--)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
}

int main()
{
    MyStack *pStack = new MyStack(5); //申请一个栈

    pStack->push('h');//栈底
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//栈顶
    if (pStack->stackFull()){
        cout << "栈满" << endl;
    }
    pStack->stackTraverse(true);//从栈底到栈顶
    cout << endl;

    char ch;
    pStack->pop(ch); //处于栈顶的字母出栈
    cout << ch << endl;//h e l l o，o出栈
    if (pStack->stackEmpty()){
        cout << "栈空" << endl;
    }
    if (pStack->stackFull()){
        cout << "栈满" << endl;
    }
    pStack->stackTraverse(false);//从栈顶到栈底
    cout <<endl;
    cout << pStack->stackLength() << endl;
    pStack->clearStack();
    if (pStack->stackEmpty()){
        cout << "栈空" << endl;
    }
    delete pStack;
    pStack = NULL;
    //system("pause");
    return 0;
}
