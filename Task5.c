#include<stdio.h>

int main() {
    
    // Какое самое маленькое число делится нацело на все числа от 1 до 20?
    
    for(int i=1; i<1000000000; i++) {
         int ok = 1;
    	for(int j=1; j<=20; j++) {
    	if(i % j > 0) { 
    	    ok = 0; break; 
    	}
    }
    if(!ok) continue;
    printf("Самое маленькое число которое делится нацело на все числа от 1 до 20: %d",i);
    break;
    }
   
    return 0;
}
