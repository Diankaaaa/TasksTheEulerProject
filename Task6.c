#include<stdio.h>

int main() {
	//Задача 6
	//Найдите разность между квадратом суммы и суммой квадратов первых ста натуральных чисел.

	int sum_square, quare_sum, difference;
	
	sum_square = 0;
	quare_sum = 0;
	
	for(int i = 1; i <=100; i++){
		sum_square += i*i;
		quare_sum += i;
	}
	
	quare_sum *= quare_sum;

	difference = quare_sum - sum_square;

	printf("Разность = %d\n", difference);
	return 0;
}
