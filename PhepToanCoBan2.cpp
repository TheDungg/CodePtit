#include<stdio.h>
int main(){
	long a,b;
	scanf("%ld%ld",&a,&b);
	printf("%ld\n", a+b);
	printf("%ld\n", a-b);
	printf("%ld\n", a*b);
	printf("%ld\n", a/b);
	printf("%ld\n", a%b);
	printf("%.2f\n", (float)a/b);
}
