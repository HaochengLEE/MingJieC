#include <stdio.h>
void sawp(int *px,int *py){
	int temp=*px;
	*px=*py;
	*py=temp;
}
void sort(int *n1,int *n2,int *n3){
	if(*n1<*n2){
		sawp(n1,n2);
		if(*n2<*n3){
			sawp(n2,n3);
			if(*n1<*n2) sawp(n1,n2);
		}

	}
	else if(*n2<*n3){
		sawp(n2,n3);
		if(*n2>*n1){
			sawp(n1,n2);
		}
	}
}
int main(){
	int n1=1,n2=3,n3=4;
	sort(&n1,&n2,&n3);
	printf("%d\n",n1 );
	printf("%d\n",n2 );
	printf("%d\n",n3 );

}