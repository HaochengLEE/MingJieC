#include <stdio.h>
int main(){
	int a=4;
	switch(a){
		case 1:puts("A"); puts("B"); break;
		case 2:puts("C"); puts("D"); break;
		case 3:puts("F");break;
		default : puts("E");
	}
	return 0;
}