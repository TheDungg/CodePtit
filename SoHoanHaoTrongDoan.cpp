#include<stdio.h> 

int soHoanHao(int n){ 
	int temp=0; 
	for(int i=1;i<n;i++){ 
		if(n%i==0){ 
			temp+=i; 		
		} 
	} 
	if(temp==n) 
		return 1; 
	return 0; 
} 

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int k=a;k<=b;k++){
			if(soHoanHao(k)) 
				printf("%d ",k);
		}
	}else{
		for(int k=b;k<=a;k++){
			if(soHoanHao(k)) 
				printf("%d ",k);
		}
	}
	
}
