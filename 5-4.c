#include <stdio.h>
int main(){
	int v=5;
	int b[v];
	int a[v];
	int i;

	for(i=0;i<=v;i++){
		a[i]=i;
	}
	for(i=0;i<=v;i++){
		b[i]=a[i];
	}
	for(i=0;i<=v;i++){
		printf("%d\n",b[i]);
	}
}