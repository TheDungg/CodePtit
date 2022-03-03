#include<stdio.h>
int main(){
	// a*x + b = 0
	float a,b;
	scanf("%f %f", &a,&b);
	if(a==0 && b==0){
		printf("Vo so nghiem");
	}else if(a==0 && b!=0){
		printf("Vo nghiem");
	}else{
		printf("%.2f", -b/a);
	}
}
