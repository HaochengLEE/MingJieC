#include <stdio.h>
int main(){
	int a=14;
	int b=7;
	int c;
	c=(a>b)?a-b:b-a;
	if(c<=10) printf("差值小于10" );
	else printf("差值大于等于11" );
	return 0;
}