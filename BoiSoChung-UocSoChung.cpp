#include<stdio.h>

long long UCLN(long long a, long long b){
	if(a==0 || b==0) return a+b;
	while(a!=b){
		if(a>b)
			a=a-b; 
		else 
			b=b-a;
	}
	return a; //return a hay b deu duoc
}

long long BCNN(long long a, long long b){
	return a*b/UCLN(a,b);
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld ",BCNN(a,b));
		printf("%lld ",UCLN(a,b));
		printf("\n");
	}	
}
