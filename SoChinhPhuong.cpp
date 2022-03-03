#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		int a;
		scanf("%d",&a);
		int m=sqrt(a);
		if(a==m*m){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
