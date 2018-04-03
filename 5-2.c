#include <stdio.h>
int main(void){
	int a[4];
	int i;
	int k=4;
	for(i=0;i<=k;i++){
		a[i]=k-i;
	}
	for(i=0;i<=k;i++){
		printf("%d\n",a[i] );
	}
}