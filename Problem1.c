#include <stdio.h>

/*
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/


int main (){
    int three = 0, five = 0, fifteen = 0, sum, i, a;
    
    for (i = 1; i < 1000 ; i++){
        if (i%3 == 0){
            three = three + i;
            //printf("%d\n",i);
        }
        if (i%5 == 0){
           five = five + i;
           //printf("for 5 = %d\n\n",i); 
        }
        if (i%15 == 0){
           fifteen = fifteen + i;
           
        }
    }
    //printf("5 = %d \n 3 = %d\n 15 = %d",five, three, fifteen); 
    sum = three + five;
    sum = sum - fifteen;

    printf("sum = %d", sum);
    scanf("%d",&a);
}
