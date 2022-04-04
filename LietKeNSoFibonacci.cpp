#include<stdio.h>

void fibonacci(int n){
	printf("0 1 ");
	long long fn2=0,fn1=1;
	for(int i=3;i<=n;i++){
		long long fn = fn1 + fn2;
		printf("%lld ",fn);
		fn2=fn1;
		fn1=fn;
	}
}

int main(){
 	int n;
 	scanf("%d",&n);
 	fibonacci(n);
 }
