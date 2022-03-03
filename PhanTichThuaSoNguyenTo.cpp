#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("\n");
		int a;
		scanf("%d",&a);
		int j=2;
		while(a>1){
			if(a%j==0){
				printf("%2d",j);
				a/=j;
			}else{
				j++;
			}
		}
	}
	return 0;
}
