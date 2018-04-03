#include <stdio.h>
/*
求最大公约式
*/
int god(int x,int y){

	// if(x>y){
		if(y==0){
			printf("%d\n",x );
		}
		else{
			printf("1\n");
			
			return god(y,x%y);
		}

	// }
	// else{
	// 	int temp=x;
	// 	x=y;
	// 	y=temp;
	// 	return god(x,y);


	// }
}
int god1(int a,int b)
 
{
	// if(a<b){int temp=a;a=b;b=temp;}
     
    return b==0?printf("%d\n", a):god1(b,a%b);
 
}

int god2(int a,int b){
	if(b>a){int temp=a;a=b;b=temp;}
	for(int i=b;i>0;i--){

		if(a%i==0&&b%i==0) {printf("%d\n",i );break;}
		else printf("1\n");

	}

}

int main(){
	
 	god(45,40);
 
 	
 
 return 0;
}