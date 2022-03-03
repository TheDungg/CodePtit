#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
	int n; 
	scanf("%d",&n); 
	int x=0,demchan=0,demle=0; 
	while(n!=0){ 
	x=n%10; 
	if(x%2==0) demchan++; 
	else demle++; 
	n/=10; 
	} 
	printf("%d %d",demle,demchan);
	}
}
