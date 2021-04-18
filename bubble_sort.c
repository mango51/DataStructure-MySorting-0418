#include "sort.h"

void func_bubble_sort(int a[], int size){
	int i,j;
	int temp;
	for(j=size-1;j>0;j--){
		for(i=0;i<j;i++){
			if(a[i] > a[i+1]){
				temp = a[i];
				a[i]= a[i+1];
				a[i+1] = temp;
			}
		}
	}
}

void func_bubble_print(int a[], int size){
	int i;
	for(i=0;i<size;i++){
			printf("a[%d] = %d\n",i,a[i]);
	}
}