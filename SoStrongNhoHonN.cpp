#include<stdio.h>

int giaithua(int n){
	int gt=1;
	for(int i=2;i<=n;i++){
		gt*=i;
	}
	return gt;
}

int ketqua(int n){
	int x=n,sum=0;
	while(n>0){
		sum+=giaithua(n%10);
		n/=10;
	}
	return sum==x;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(ketqua(i))
			printf("%d ",i);
	}
}
