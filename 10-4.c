#include <stdio.h>
void set_idx(int *v,int n){
	for(int i=0;i<=n;i++){
		*(v+i)=i;
	}
}
int main(void){
	int a[4];
	int n=5;
	set_idx(a,n);
	for(int i=0;i<=n;i++){
		printf("a%d ", i);
	printf("%d\n",a[i] );}



}