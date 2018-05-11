#include <iostream>

using namespace std;

class MyStack
{
public:
    MyStack(int size);    //��ʼ��ջ�ռ�
    ~MyStack();//����ջ�ռ��ڴ�
    void clearStack();//���ջ
    bool stackEmpty();//�п�ջ�����շ���true
    bool stackFull();//����ջ����������true
    int stackLength();//ջ��Ԫ�ظ���
    bool push(char elem);//Ԫ����ջ��ջ������
    bool pop(char &elem);//Ԫ�س�ջ��ջ���½�
    void stackTraverse(bool isFromBottom);//����ջ��Ԫ�� isFromBottom=1����ջ�ױ���
private:
    char *m_pBuffer;//ջ�ռ�ָ��
    int m_isize;//ջ����
    int m_itop;//ջ����Ҳ��ջ��Ԫ�ظ���
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
    return 0 == m_itop ? true : false;  //�ж�ջ���Ƿ�Ϊ0���Ƿ���true,���Ƿ���false;
}

bool MyStack::stackFull()
{
    return m_isize == m_itop ? true : false;
}

int MyStack::stackLength()
{
    return m_itop;   //����ջ����Ҳ����ջ��Ԫ�ظ���
}

bool MyStack::push(char elem)
{
    if (stackFull())  //����ջ����������true��ִ��if��䣬����ջ��ѹ
    {
        return false;
    }
    m_pBuffer[m_itop] = elem;  //��Ԫ��ѹ��ջ��������ջ��
    m_itop++; //ջ����������1��
    return true;  //��ʾ��ջ�ɹ�
}

bool MyStack::pop(char &elem)
{
    if (stackEmpty())  //�п�ջ�����շ���true��ִ��if���
    {
        return false;  //��ΪΪ�գ���Ԫ�ؿ��Գ�ջ
    }
    m_itop--; //ջ��������С1���ͷ�ջ��Ԫ��
    elem = m_pBuffer[m_itop];
    return true;  //��ջ�ɹ�
}

void MyStack::stackTraverse(bool isFromBottom)  //����ջ��Ԫ�� isFromBottom=1����ջ�ױ���
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
    MyStack *pStack = new MyStack(5); //����һ��ջ

    pStack->push('h');//ջ��
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//ջ��
    if (pStack->stackFull()){
        cout << "ջ��" << endl;
    }
    pStack->stackTraverse(true);//��ջ�׵�ջ��
    cout << endl;

    char ch;
    pStack->pop(ch); //����ջ������ĸ��ջ
    cout << ch << endl;//h e l l o��o��ջ
    if (pStack->stackEmpty()){
        cout << "ջ��" << endl;
    }
    if (pStack->stackFull()){
        cout << "ջ��" << endl;
    }
    pStack->stackTraverse(false);//��ջ����ջ��
    cout <<endl;
    cout << pStack->stackLength() << endl;
    pStack->clearStack();
    if (pStack->stackEmpty()){
        cout << "ջ��" << endl;
    }
    delete pStack;
    pStack = NULL;
    //system("pause");
    return 0;
}
