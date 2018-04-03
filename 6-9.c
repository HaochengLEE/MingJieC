#include <stdio.h>
void revintary(int a[],int n){
	int b[n];

	for(int i=0;i<=n;i++){
		b[i-1]=a[n-i];
				
	}
	for(int j=0;j<n;j++){
		printf("%d\n", b[j]);

	}
	

}
int main(void){
	int v[5]={1,34,26,17,26};
	int c=5;
	revintary(v,c);
	return 0;

}