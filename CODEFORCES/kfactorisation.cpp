#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long m,k;
	cin>>m>>k;
	int p=1;
	vector<int>t;
	long long l=m; bool f=false;
for(int i=2;i*i<=m;i++){
	
	
		if(k==1 || f==true)
	break;
	while(m%i==0 && k>1){
		if(p!=l){
		
		t.push_back(i);
		m=m/i;
		p=p*i;
		k--;
	}
	else
	{
		f=true;
		break;
	}
	}
	
	}
	
	if(f==true || k>1|| (l/p)==1)
	cout<<-1;
	else{
		
		t.push_back(l/p);
		
		
		
		for(int o=0;o<t.size();o++)
		cout<<t[o]<<" ";
		
	}
	
		
	

}
