#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long index;
    long long a[61];
    a[1]=0;
    a[2]=1;
    for(long long i=3;i<=60;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    cin>>index;
    cout<<a[index]<<endl;
}
