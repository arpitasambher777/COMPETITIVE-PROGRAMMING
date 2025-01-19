#include<iostream>
using namespace std;
int main(){
long long n,q,k;
long long sum=0;
cin>>n>>q;
long long a1[n];

for(int i=0;i<n;i++)
{cin>>k;
if(i!=0)
a1[i]=a1[i-1]+k;
else
a1[i]=k;

}
int a,b;

for(int i=1;i<=q;i++){

cin>>a;
cin>>b;
if(a==1)
sum=a1[b-1];
else

sum=a1[b-1]-a1[a-2];
cout<<sum<<endl;
}
}
