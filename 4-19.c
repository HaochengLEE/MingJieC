#include <stdio.h>
int main(void){
	int a=12;
	int i;
	int count=0;
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d\n",i );
			count++;
		}

	}
	printf("%d有%d个约数", a,count);
	return 0;
}