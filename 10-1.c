#include <stdio.h>
void adjust_point(int *n){
	if(*n>100) *n=100;
	if(*n<0) *n=0;

}

int main(){
	int n=-10;
	adjust_point(&n);
	printf("%d\n", n);

}