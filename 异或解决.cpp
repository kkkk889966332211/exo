#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[5]={3,1,0,5,4};
    int sum=0,k=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
        k=k+(i+1);
    }
    cout <<k-sum;
    return 0;
}
