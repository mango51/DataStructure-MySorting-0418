#include "sort.h"

void func_select_sort(int a[], int size){
	int i, j;
	int min;
	int temp;
	for(i=0;i<size;i++){
		min = i;
		for(j=i+1;j<size;j++){
			if(a[min]>a[j]){	// ���� ��(ó������ a[i]��) ���� ������ min�� �ش� �ε��� ��
				min = j; // min�� �� ��, j�� �������� �� ��, min�� ó�� ���� ���� �ƴ� ���� ����
				// �ƴ� ���� ���ذ��� ������ �� ���� ���� ���̾��� ������ �ش� �ε����� min ���� ���Ե�
			}	//  j�� ���� �� �������� min���� i�� �ƴ϶� �ε��� i������ ���� ���� ���� �ε����� �� ����
			// ������ �������� ���ư� �� �� �� ���� ���� ������ �ٲ� �� �ִ� min �� >> ������!
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
