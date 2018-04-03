#include <stdio.h>
int main(){
	int n=5;
	int num=0;
	// int i;
	for(int i=1;n>=i;n--){
		num+=n;
	}
	printf("%d\n", num);

	return 0;

}