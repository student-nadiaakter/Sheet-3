#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long a[n];
for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

bool flag =true;
long i=0;
long j=n-1;
while(i<=j)
{
    if(a[i]!=a[j])
    {
        flag=false;
        break;
    }
    i++;
    j--;
}
if(flag==true){
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;
}
