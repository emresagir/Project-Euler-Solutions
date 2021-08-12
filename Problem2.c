/*
Problem 2

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/

#include <stdio.h>

int sum = 1, i = 0, a = 1, b = 2, allsum = 0;

int main(){
    while(sum < 4000000){
           sum = a + b;
           a = b;
           b = sum;
           //printf("%d\n",sum);
           if ( sum %2 == 0 && sum < 4000000){
                printf("sum = %d\n",sum);
                allsum = allsum + sum;
              }
           }
    printf("result = %d", allsum + 2); // we pre-defined 2
    scanf("%d",&a); // for cmd to prevent close rightaway
    
}


