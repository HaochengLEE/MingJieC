#include <stdio.h>
int main(void){
	int a=25;
	int b=1;
	for(int i=1;i<=a;i++){
		if(b>=10){b=i%10;printf("%d\n",b );}
		else{
			printf("%d\n",b );}
			b++;
		
	}
	return 0;
}