#include <stdio.h>
void decrement_date(int *y,int *m,int *d){
	    *d+=1;
		switch(*m){
			case 1:if(*d>=31){*m+=1;*d=1;}break;
			case 2:if(*d>=28&&*y%4!=0){*m+=1;*d=1;break;}
			case 3:if(*d>=31){*m+=1;*d=1;}break;
			case 4:if(*d>=30){*m+=1;*d=1;}break;
			case 5:if(*d>=31){*m+=1;*d=1;}break;
			case 6:if(*d>=30){*m+=1;*d=1;}break;
			case 7:if(*d>=31){*m+=1;*d=1;}break;
			case 8:if(*d==31){*m+=1;*d=1;}break;
			case 9:if(*d>=30){*m+=1;*d=1;}break;
			case 10:if(*d>=31){*m+=1;*d=1;}break;
			case 11:if(*d>=30){*m+=1;*d=1;}break;
			case 12:if(*d>=31){*y+=1;*m=1;*d=1;}break;
		}




	// if(*m==2&&*d>=29){
	// 	if(*y%4==0){*m=3;*d=1;}
	// 	else{*m=3;*d=1;}
	// }


}
int main(){
	int y=2008;
	int m=2;
	int d=29;
	decrement_date(&y,&m,&d);
	printf("%d\n", y);
	printf("%d\n", m);
	printf("%d\n", d);
	

}