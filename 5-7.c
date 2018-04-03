#include <stdio.h>
#define NUMBER 4;
int main(){
	int i,j;
	int a[]={};
	for(i=0;i<=4;i++){
		a[i]=i;
	}
	printf("{ ");
	for(j=0;j<=4;j++){
		if(j<4){printf("%d, ",a[j]);}
			else{
		printf("%d",a[j]);}

	}
	printf(" }");
	return 0;

}