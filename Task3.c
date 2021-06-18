#include <stdio.h>

int main()
{
      //Задача 3
      //Наибольший простой делитель
      //Простые делители числа 13195 - это 5, 7, 13 и 29.
      //Каков самый большой делитель числа 600851475143, являющийся простым числом?

      int delitel = 2; 
      int f = 1;
      long int num = 600851475143;
      while(f == 1){
          if(num % delitel == 0){
              num /= delitel;
          }
          if(num == 1){
              printf("%d", delitel);
              f = 0;
          }
        delitel++;
      }
  return 0;
}
