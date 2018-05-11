 #include <iostream>

using namespace std;
int a[11]={1,3,1,4,4,3,5,6,7,7,6};

int main()
{
    int i,k=a[0];
    for(i=1;i<11;i++)
    {
        k=k^a[i];
    }
    cout <<k;
    return 0;
}

