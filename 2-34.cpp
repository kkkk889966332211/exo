#include <iostream>

#include<iomanip>

using namespace std;

int main()
{
    enum color{red,yellow,blue,white,black};//声明枚举类型color

    color pri;  //定义color类型的变量pri

    int i,j,k,n=0,loop;//n是累计不同颜色的组合数

    for(i=red;i<=black;i++)//当i为某一颜色时
    {
        for(j=red;j<=black;j++)//当j为某一颜色时
        {
            if(i!=j)//若前两个球的颜色不同
            {
                for(k=red;k<=black;k++)//只有前两个球的颜色不同，才需要检查第3个球的颜色
                {
                    if(k!=i&&k!=j)//三个球的颜色都不同
                    {
                        n=n+1;//使累计值n加1

                        cout<<setw(3)<<n;//输出当前的n值，字符宽度为3

                        for(loop=1;loop<=3;loop++)//先后对三个球做处理
                        {
                            switch(loop)//loop的值先后为1，2，3
                            {
                            case 1:pri=color(i);break;//color(i)是强制类型转换，使pri的值为i

                            case 2:pri=color(j);break;//                                   j

                            case 3:pri=color(k);break;//                                   k

                            default :break;
                            }

                            switch(pri)   //判断pri的值，输出相应的颜色
                            {
                            case red:cout<<setw(8)<<"red";break;

                            case yellow:cout<<setw(8)<<"yellow";break;

                            case blue:cout<<setw(8)<<"blue";break;

                            case white:cout<<setw(8)<<"white";break;

                            case black:cout<<setw(8)<<"black";break;

                            default :break;
                            }
                        }

                        cout<<endl;
                    }
                }
            }
        }
    }

    cout<<"total:"<<n<<endl;  //输出符合条件的组合的个数

    return 0;
}
