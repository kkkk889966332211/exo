#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int r(int Y);
bool judge(int A,int B);

int main()
{
    bool flag=false;
    int A,B;
    A=r(100);
    do{
    cout << "please guess the number:" << endl;
    cin >> B;
    flag=judge(A,B);
    }while(flag==false);
    cout <<"congatuations!"<<endl;
    return 0;
}
int r(int Y)
{
    srand((unsigned)time(NULL)); //���ڱ�֤�������
    return rand()%Y;  //��rand������������趨��Χ
}
bool judge(int A,int B)
{
    if(B==A)
    {
        return true;
    }
    else if(B<A)
    {
        cout<<"It's  too low!"<<endl;
        return false;
    }
    else
    {
        cout<<"It's too high!"<<endl;
        return false;
    }
}
