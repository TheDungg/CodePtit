#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp = n;
	int P=1;
  while(temp != 0)
  {
    P = P * (temp % 10);
    temp = temp / 10;
  }
  printf("%d",P);
}
