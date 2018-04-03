#include <stdio.h>
int main(void){
	int a=6;
	int b=3;
	int c=4;
	int max;
	int d;
	scanf("%d",d);
	max=(a>b)?a:b;
	max=(c>max)?c:max;
	printf("%d\n",max );

}