#include<stdio.h>
#include<math.h>
int main(){
	// a*x^2 + b*x + c = 0
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float D=b*b-4*a*c;
	float x12=-b/(2*a);
	float x1=(-b-sqrt(D))/(2*a);
	float x2=(-b+sqrt(D))/(2*a);
	float x=-c/b;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Vo so nghiem");
			}else{
				printf("NO");
			}
		}else{
			printf("%.2f",x);
		}
	}else{
		if(D<0){
			printf("NO");
		}else if(D==0){
			printf("%.2f", x12);
		}else{
			printf("%.2f",x1);
			printf("%.2f",x2);
		}
	}
}
