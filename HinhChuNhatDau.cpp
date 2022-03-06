#include<stdio.h>
int main(){
	int cr,cc;
	scanf("%d %d",&cc,&cr);
	for(int i=1;i<=cr;i++){
		for(int j=1;j<=cc;j++){
			if(i == 1 || j == 1 || i == cr || j == cc){
                printf("*");
            }
            else{
                printf(" ");
            }
		}
		printf("\n");
	}
	
}
