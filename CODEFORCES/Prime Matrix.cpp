#include<iostream>
#include<vector>

using namespace std;
void solve(vector<int> &temp,int max){
	for(int k=2;k*k<=max;k++){
		for(int m=k*k;m<=max;m=m+k)
			temp[m]=1;
		
	}
	for(int s=max;s>=2;s--){
		if(temp[s]!=0){
			int r=1;
			while(temp[s]!=0){
				temp[s]=r;
				r++;
				s--;
			}
		}
	}
return;
}


int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		
		cin>>a[i][j];
		if(max<a[i][j])
		max=a[i][j];
	}
	}
	
	int c=0;
	for(int k=2;k*k<=max;k++)
	{
		if(max%k==0)
		c++;
		if(c>0)
		break;
	}
	
	if(c>0)
	{
		bool f=false;
		while(f!=true){
			max=max+1;
			int l=0;
	for(int k=2;k*k<=max;k++)
	{
		if(max%k==0)
		l++;
		if(l>0)
		break;
	}
	if(l==0) f=true;
		}
		
	}
	
//	cout<<"maxx="<<max<<endl;
	vector<int>temp(max+1,0);
	temp[0]=temp[1]=1;
	solve(temp,max);
	int cost=INT_MAX;
	
//	cout<<"distance array ";
//	for(int i=0;i<=max;i++) cout<<temp[i]<<" ";
//	cout<<endl;

	for(int i=0;i<n;i++){
	int	sum=0;
		for(int j=0;j<m;j++){
			a[i][j]=temp[a[i][j]];
			sum=sum+a[i][j];
		}
		cost=min(cost,sum);	
	}
	for(int i=0;i<m;i++){
	int	sum=0;
		for(int j=0;j<n;j++)
		sum=sum+a[j][i];
		cost=min(cost,sum);	
}
cout<<cost;
}

