#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
	    int n;
	    scanf("%d",&n);
	    int sum = 0;
while(n>0){
sum+= n % 10 ;
n/=10;
}
	
printf("%d\n",sum);}


}
