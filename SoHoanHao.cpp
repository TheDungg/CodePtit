#include<stdio.h>
int main(){
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;			
		}		
	}
	if(sum==n){
			printf("1");
		}else{
			printf("0");
		}
}
