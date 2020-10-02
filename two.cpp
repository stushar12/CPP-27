#include<bits/stdc++.h>
using namespace std;
int main()
 {
int res=1;
string str="string";
int n=str.length();
int mul=1;
int rank=1;
for(int i=1;i<=n;i++)
{
mul=mul*i;
}
int count[256]={0};
for(int i=0;i<n;i++)
{
    count[str[i]]++;
}
for(int i=1;i<256;i++)
{
    count[i]=count[i]+count[i-1];
}
for(int i=0;i<n;i++)
{
    mul=mul/(n-i);
     rank=rank+ count[str[i]-1]*mul;
     for(int j=str[i];j<256;j++)
     count[j]--;
}
cout<<rank;
}