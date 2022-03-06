#include<stdio.h>
#include<math.h>
int KiemTraSoNguyenTo(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int count=0,i=2;
	while(count<n){
		if(KiemTraSoNguyenTo(i)){
			printf("%d\n",i);
			count ++;
		}
		i++;
	}
}
