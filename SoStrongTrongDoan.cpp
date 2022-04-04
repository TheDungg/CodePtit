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
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int k=a;k<=b;k++){
			if(ketqua(k)) 
				printf("%d ",k);
		}
	}else{
		for(int k=b;k<=a;k++){
			if(ketqua(k)) 
				printf("%d ",k);
		}
	}
}
