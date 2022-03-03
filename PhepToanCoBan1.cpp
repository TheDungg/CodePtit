#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0){
		printf("0");
	}else{
		printf("%d\t", a+b);
		printf("%d\t", a-b);
		printf("%d\t", a*b);
		printf("%.2f\t", (float)a/b);
		printf("%d\t", a%b);
	}
}
