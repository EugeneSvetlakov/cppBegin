/*
 * Main.c
 *
 *  Created on: 25.12.2018
 *      Author: advuser
 */

#include <stdio.h>
#include <math.h>

int main(int argc, const char* argv[]) {
	// \n \t \\ \0
	//printf("Hello \0 world! \n");
	/*printf("String with tab \t and go to new line \n");
	printf("print \\ simbol ");
*/
	// %d %s %p %f %lf %x
	// %.2f
	// %05d
	/*int a = 50;
	printf("%4d%%", a);
*/
	//№ 2: Ввести число и проверить на вхождение в диаппазон
	/*const int min = 0;
	const int max = 100;*/
	int input;
	/*printf("введите целое число: ");
	scanf("%d",&input);
	printf("\nВведенное число '%d' %sвходит в диаппазон от %d до %d\n",input,
			(input >= min && input <= max) ? "" : "не", min, max);
	*/
	//№ 3: Ввести 10 чисел и вывести их среднее арифметическое
	/*float sum_d;
	for(int i = 0; i<10; i++){
		printf("Введите %d число: ", i + 1); scanf("%d",&input);
		sum_d += input;
	}
	printf("Среднее арифметиеское введенных чисел = %.2f\n", (sum_d / 10));
	 */
	//№ 4: Вывод равнобедненного треугольника по запрошенному количеству строк
	/*do{
		printf("Введите количество строк(от 3 до 15): ");
		scanf("%d",&input);
	} while (input < 3 || input > 15);
	int line = 0;
	while (line <= input){

		for (int i = 0; i < input - line; i++){
				printf("%s"," ");
			};
		for (int i = 0; i < 2*line + 1; i++){
				printf("%s","^");
			};
		printf("\n");
		line++;
	}
	line = line - 2;
	while (line >= 0){

			for (int i = 0; i < input - line; i++){
					printf("%s"," ");
				};
			for (int i = 0; i < 2*line + 1; i++){
					printf("%s","^");
				};
			printf("\n");
			line--;
		}
*/
	//Урок № 5
	int number;
	printf("Введите число: ");
	scanf("%d",&number);
	int d = 1, i = 1;
	while(i++ <= number){
		printf("i= %d,", i);
		if(number % i == 0){
			d++;
			printf("i++= %d, d= %d, остаток = %d\n",i , d, number % i);
		}
		else
			{
			printf("else: i++= %d, d= %d, остаток = %d\n",i , d, number % i);
			continue;
			}
		if(d == 3)
			break;
	}
	printf("d= %d, Введенное число %d %sявляется простым\n", d, number, (d == 2) ? "":"не ");

	return 0;
}
