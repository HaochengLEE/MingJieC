#include <stdio.h>
int main(void){
	int a=15;
	int i;
	for(i=0;i<a;i++){
		if(i%2!=0)printf("%d\n", i);
	}
	return 0;

}