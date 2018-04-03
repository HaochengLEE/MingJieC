#include <stdio.h>
int main(){
	int n1,n2,max;
	puts("请输入两个数");
	printf("%s\n","整数1" );
	scanf("%d",&n1);
	printf("%s\n","整数2" );
	scanf("%d",&n2);

	max=(n1>n2)?n1:n2;
	printf("最大值是%d\n",max );
	return 0;

}