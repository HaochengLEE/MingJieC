#include <stdio.h>
int main(void){
	int i,j,k,l;
	printf("   |");

	for(l=1;l<=9;l++){
		printf("%3d",l );
	}
	putchar('\n');
	for(k=0;k<39;k++){
		printf("-");
	}
	putchar('\n');
	for(i=1;i<=9;i++){
		printf("%3d|",i );
		for(j=1;j<=9;j++){
			printf("%3d",i*j );
			// puts('');
		}
		printf("\n");
	}


	return 0;

}