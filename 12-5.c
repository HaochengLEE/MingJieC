#include <stdio.h>
#include <math.h>
//逻辑
//坐标结构体
typedef struct 
{
	double x;
	double y;
}Point;
//汽车结构体
typedef struct 
{
	Point pt;
	double oil;
}Car;

// 行驶函数
int move(Car *c,Point p){
	int z=sqrt(p.x*p.x+p.y*p.y);
	// 判断开不开
	if(z>c->oil) 
		return 0;
	c->pt.x+=p.x;
	c->pt.y+=p.y;
	c->oil-=z;
	return 1;



}


int main(void){
	Car mycar={1,1,100};

	while(1){
		
		Point dest;
		dest.x=20;
		dest.y=20;
		if(move(&mycar,dest)){
			printf("x坐标%f\n",&dest.x );
			printf("y坐标%f\n",&dest.y );
		}
		else
			printf("无法行驶" );
		
		



	}

}