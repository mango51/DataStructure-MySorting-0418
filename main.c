#include "sort.h"

void main(){
	/*int size = 8;
	int list[8]={69,10,30,2,16,8,31,22};
	int i;*/
	//func_select_sort(list, size);
	//func_select_print(list, size);
	//printf("\n");
	//func_bubble_sort(list, size);
	//printf("\n");
	//func_bubble_print(list, size);
	//printf("\n");

	/*srand(time(NULL));
	for(i=0; i<SIZE; i++){
		list[i] = rand()%100;
	}
	func_qs_sort(list, 0, SIZE-1);*/

	int i = 10, j =20;
	int * ptr;
	printf("i=%d / &i = %p\n", i, &i);
	printf("j=%d / &j = %p\n", j, &j);
	printf("\n");
	ptr = &i;
	printf("ptr=%p / &ptr = %p\n",ptr, &ptr);
	printf("*ptr = %d\n", *ptr);

	printf("\n");
	ptr  =&j;	//j의 주소값
	printf("ptr=%p / &ptr = %p\n",ptr,&ptr);	//j의 주소값, ptr의 주소값
	printf("*ptr = %d\n", *ptr);	// j값 = 20
	printf("\n");
	i=*ptr;	
	printf("i=%d / &i = %p\n",i,&i);	//20(j값), i의 주소값
	printf("j=%d / &j = %p\n", j,&j);	// 20, j의 주소값
	
}