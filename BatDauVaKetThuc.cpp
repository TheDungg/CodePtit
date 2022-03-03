#include<stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	for(int i=1;i<=N;i++){
		unsigned int n,m; 
		scanf("%d", &n);
		int k=n; 
		while(k/10 >= 1){	
	 	k/=10; m=k; 
	}
		if(m == (n%10)){ 
		printf("YES\n"); 
		}else printf("NO\n"); 
	}
}
