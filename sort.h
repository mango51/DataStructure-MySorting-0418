#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE		8

void func_select_sort(int a[], int size);
void func_select_print(int a[], int size);

void func_bubble_sort(int a[], int size);
void func_bubble_print(int a[], int size);

int func_qs_partition(int a[], int start, int end);
void func_qs_sort(int a[], int start, int end);
