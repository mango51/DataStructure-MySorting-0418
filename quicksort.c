#include "sort.h"

int func_qs_partition(int a[], int start, int end){
	int left, right, pivot;
	int temp, i;

	left = start;
	right = end;
	pivot = (start+end) / 2;

	for(i=0; i<SIZE; i++){
		if(i==pivot){
			printf(" [%d] ", a[i]);
		}else{
			printf("%-3d", a[i]);
		}
	}
	printf("\npivot=%d / ", pivot);

	while(left<right){
		while( (a[left] < a[pivot]) && (left<right) ){
			left++;
		}
		printf("left=%d / ", left);

		while( (a[right] >= a[pivot]) && (left<right) ){
			right--;
		}
		printf("right=%d\n\n", right);

		if(left<right){
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;

			if(left == pivot){
				left = start;
			}

			for(i=0; i<SIZE; i++){
				if(i==pivot){
					printf(" [%d] ", a[i]);
				}else{
					printf("%-3d", a[i]);
				}
			}
			printf("\n");
		}
	}

	temp = a[pivot];
	a[pivot] = a[right];
	a[right] = temp;

	pivot = right;

	return pivot;
}

void func_qs_sort(int a[], int start, int end){
	int pivot;

	if(start<end){
		pivot = func_qs_partition(a, start, end);
		func_qs_sort(a, start, pivot-1);
		func_qs_sort(a, pivot+1, end);
	}
}
