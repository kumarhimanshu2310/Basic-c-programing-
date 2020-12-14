#include<stdio.h>
int main(){
	int i,j;
	int a[5][6]={1,2,3,4,5,6,8,6,9,3,5,4,2,5,8,7,9,5,3,1,2,9,7,5,6,3,4,8,6,6};
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
