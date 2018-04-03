#include <stdio.h>
int sumup(int n){
	int var=0;
	for(int i=1;i<=n;i++){
		var+=i;
	}
	return var;
}
int main(void){
	printf("%d\n",sumup(3));

	return 0;
}