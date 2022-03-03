#include<stdio.h>
int main (){

	int t;
	scanf("%d", &t);
	while(t--){
	int a, b, ucln;
		scanf("%d %d", &a, &b);
		while(a*b!=0){
			if (a>b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		ucln = a + b;
		
	
	printf("%d\n", ucln);
}

}
