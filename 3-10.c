#include <stdio.h>
int main(void){
	int a=1;
	int b=1;
	int c=1;
	if(a==b&&b==c&&c==a) printf("有三个值相等");
	if(a==b||a==c||b==c) printf("有两个值相等");
	// if(a==b||a==c||b=c)

	return 0;

} 