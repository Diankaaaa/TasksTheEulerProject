#include<stdio.h>

#define INT_MAX 2147483647

int main() 
{
  //Какое число является 10001-м простым числом?

	int num, count, flag, stop_flag;
	
	count = 0;
	while(stop_flag !=1){
		for(int k = 2; k <= INT_MAX; k++){
			num = 2;
			flag = 0;
			while(num < k){
				if(k%num == 0){
					flag++;
				}
				num++;
			}

			if(flag==0){
				count++;
				printf("%d - %d \n", k, count);
				if(count == 10001){
					stop_flag = 1;
					break;
				}
			}

		}
	}

	return 0;
}
