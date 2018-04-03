#include <stdio.h>
struct student
{
	char name[64];
	int height;
	float weight; 
	long schols;
};
int main(void){
	struct student takao={"lihaocheng",70,187.1};

	printf("%s\n",takao.name );
	printf("%p\n",&takao.name );
	printf("%d\n",takao.height );
	printf("%f\n",takao.weight );
	printf("%ld\n",takao.schols );

}