/*
 ============================================================================
 Name        : hello.c
 Author      : Eugene Svetlakov
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#define LENGTH_ARR 10

int getArr(int* arr, int length){
	int bNechet = 0;
	int i;

	for (i = 0; i < length; i++) {
		if(arr[i] % 2 != 0){
			arr[i] = arr[i] * 2;
			bNechet = 1;
		}

	}
	return bNechet;
}

int reshenie(int a, int b, int c, float* x1, float* x2){
	int D = b*b - 4*a*c;
	int res = 1;
	if(D > 0){
		res = 1;
		*x1 = (sqrt(b*b - 4*a*c)-b)/(2*a);
		*x2 = -(sqrt(b*b - 4*a*c)+b)/(2*a);
	} else if(D == 0){
		res = 0;
		*x1 = *x2 = -b/(2*a);
	} else {
		res = -1;
	}
	return res;
}

int main(void) {
	/*
	 * Решение квадратного уравнения
	float x1;
	float x2;
	int res = reshenie(2, 3, 1, &x1, &x2);
	printf("Результат: %d, x1= %.2f, x2= %.2f", res, x1, x2);
	*/
	//Работа с массивом
/*	int arr[LENGTH_ARR] = {2,2,4,4,5,6,6,8,10,10};
	int res = getArr(arr, LENGTH_ARR);
	int i;
	printf("Результат: %d.\n", res);
	if(res == 1){
		for (i = 0; i < LENGTH_ARR; i++){
			printf("arr[%d]= %d\n", i, arr[i]);
		}
	}
	*/
	int num = -2147483648;
	unsigned char* ch = &num
	return EXIT_SUCCESS;
}
