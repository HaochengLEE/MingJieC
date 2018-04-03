#include <stdio.h>
#define NUMBER 5
//冒泡排序
//第一趟把最小的值放到第一个位置，第二趟把第二小的值放第二个位置，排完n个值需要n-1趟。
void sort(int a[],int n){
	//控制趟
	for (int i = 0; i < n-1; i++)
	{
		//控制每趟的值交换次数
		for (int j = n-1; j >i; j--)
		{
			if(a[j-1]<a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		
	}

}
int main(){
	int i,j;
	int a[]={179,163,175,178,173};
	sort(a,NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("%d\n",a[i] );
	}


}