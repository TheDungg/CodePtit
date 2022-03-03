#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	for(int k=1;k<=N;k++){
	int n,i,m=0,biendem=0;  
	scanf("%d",&n);  
	m=n/2;  
	for(i=2;i<=m;i++)  
	{  
	if(n%i==0)  
	{  
	printf("NO");  
	biendem=1;  
	break;  
	}  
	}  
	if(biendem==0)  
	 printf("YES");		
	}
}
