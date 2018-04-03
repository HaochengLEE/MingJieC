#include <stdio.h>
int main(void){
	int num=0;
	int count=0;
	int retry;//这个用来控制是否继续 
	do{
		int t;
		scanf("%d",t);
		num=+t;
		count++;
		printf("是否继续输入，继续0，否9" );
		scanf("%d",retry);
	}while(retry==0);
	printf("和为%d平均值为%.2f",num,(double)num/count );
	return 0;

}