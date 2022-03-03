#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
	int a;
	scanf("%d",&a);
	int sum=0;
	while(a>0){
		sum=sum + a%10;
		a=a/10;
		}
	printf("%d",sum);
	}
}
