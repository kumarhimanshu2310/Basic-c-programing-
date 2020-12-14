#include<stdio.h>
int main(){
	int a[8],i,num,pos,size;
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("\nenter the elements of array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\elements of the array are");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	return 0;
}
