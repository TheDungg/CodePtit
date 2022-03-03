#include<stdio.h>
int main(){
	int a,b;
	int sum=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		for(int i=b;i<=a;i++){
			sum+=i;
		}
		printf("%d",sum);
	}else{
		for(int j=a;j<=b;j++){
			sum+=j;
		}
		printf("%d",sum);
	}
}
