#include<stdio.h>

int TongChiaHet10(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;	
}

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int b;
		scanf("%d",&b);
		if(TongChiaHet10(b)==1) printf("YES\n");
		else printf("NO\n");
	}
	
}
