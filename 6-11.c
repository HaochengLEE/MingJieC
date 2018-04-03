#include <stdio.h>
int search_idx(const int v[],int idx[],int key,int n){
	int k=0;
	int i=0;
	while(true){
		if(i>n)return false;
		if(v[i]==key) {idx[k]=i;k++;}
		i++;

	}
	for(int j=0;j<k;j++){
		printf("%d\n", idx[j]);
	}

}
int main(){
	int a[]={1,3,7,3,3};
	int b[3];
	int c=3;
	int d=5;
	search_idx(a,b,c,d);

}