#include <stdio.h>
struct xyz
{
	int x;
	long y;
	double z;

};
struct xyz scan_xyz()
{
	struct xyz abc={1,2,3};
	return abc;

};
int main(void){
	struct xyz abc={};

	abc=scan_xyz();

	printf("%d\n",abc.x );
	// printf("%p\n",abc.x);
	printf("%ld\n",abc.y );
	printf("%f\n",abc.z);
	
}
