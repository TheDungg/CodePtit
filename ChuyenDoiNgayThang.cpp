#include<stdio.h>
int main(){
	int N,year=0,week=0,day=0;
	scanf("%d",&N);
	// N = year*365 + week*7 + day
	year=N/365;
	week = (N-(year*365))/7; 
	day = N-(year*365)-(week*7); 
	printf("%d %d %d", year, week, day);
}
