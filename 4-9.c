#include <stdio.h>
int main(void){
	int a=10;
	while(a>0){
		if(a%2==0)putchar('+');
		else putchar('-');
		a--;
	}
}