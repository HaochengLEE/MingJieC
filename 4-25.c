#include <stdio.h>
int main(void){
	int a=26;
	int i,j,k;
	//控制行数
	
	for(i=1;i<=a;i++){
		//控制每行输出什么
		// while(i>=10){i=i%10;}
		//输出空格
		int l=i;
		for(j=0;j<=i;j++)
			printf(" ");
		//输出数字
		for(k=0;k<(2*(a+1-i)-1);k++){
				if(i>9){l=i%10;printf("%d",l );}
				else printf("%d",i );
			}



		
		printf("\n");

	}
	return 0;

}