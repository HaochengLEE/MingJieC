#include<stdio.h>

int main(void){
	int a=37;
	int b=28;
	int c=(a>b)?a-b:b-a;
	int d=(a>b)?b:a;
	int m=0;
	do{
		
		m+=d;
		d++;
		c--;
	}while(c+1);
	printf("%d\n",m );

	return 0;
}