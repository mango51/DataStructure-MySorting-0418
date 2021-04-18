#include "sort.h"

void func_select_sort(int a[], int size){
	int i, j;
	int min;
	int temp;
	for(i=0;i<size;i++){
		min = i;
		for(j=i+1;j<size;j++){
			if(a[min]>a[j]){	// 기준 값(처음에는 a[i]값) 보다 작으면 min에 해당 인덱스 들어감
				min = j; // min에 들어간 후, j의 포문에서 돌 때, min은 처음 기준 값이 아닐 수도 있음
				// 아닌 경우는 기준값과 비교했을 때 보다 작은 값이었기 때문에 해당 인덱스가 min 값에 대입됨
			}	//  j의 포문 돌 때까지는 min값이 i가 아니라 인덱스 i값보다 작은 값을 가진 인덱스일 수 있음
			// 심지어 포문으로 돌아갈 때 또 더 적은 값이 나오면 바뀔 수 있는 min 값 >> 가변적!
		}
		/*temp = a[min];
		a[min] = a[i];
		a[i] = temp;*/

		temp = a[i];
		a[i] = a[min];
		a[min]=temp;
	}

}

void func_select_print(int a[],int size){
	int i;
	for(i=0;i<size;i++){
			printf("a[%d] = %d\n",i,a[i]);
	}
}
