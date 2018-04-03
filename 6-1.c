#include <stdio.h>
int min2(int a,int b){
	if(a>b) return b;
	else return a;
}

int main(void){
	printf("%d\n", min2(123,321)); 
}