#include<stdio.h>
int main(){
	int a=20;
	int b=2;
	while(a>=b){
		if(b%2==0)printf("%d\n", b);
		b++;
	}
}