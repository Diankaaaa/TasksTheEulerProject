#include <stdio.h>

int main()
{
   //Задача 2
   //Четные числа Фибоначчи
   //Каждый следующий элемент ряда Фибоначчи получается при сложении двух предыдущих. Начиная с 1 и 2, первые 10 элементов будут:
   //1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
   //Найдите сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.
    int f1=1,f2=2,f=0;
    int s=2;
    
        while (f<=4000000){
            f=f1+f2;
                if (f%2==0) {
                    s+=f;
                }
            f1=f2;
            f2=f;        
        }

   printf("Сумма четных чисел  =  %d\n",s);

return 0;
}
