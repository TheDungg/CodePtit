#include<stdio.h>

long long UCLN(long long a, long long b){
	if(a==0 || b==0) return a+b;
	while(a!=b){
		if(a>b)
			a=a-b; 
		else 
			b=b-a;
	}
	return a;
}

long long BCNN(long long a, long long b){
	return a*b/UCLN(a,b);
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n",UCLN(a,b));
	printf("%lld\n",BCNN(a,b));
}
