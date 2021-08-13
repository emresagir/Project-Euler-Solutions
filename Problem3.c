/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

long long int num = 600851475143ULL;
                
long long int i,j = 0, k, a, flag;

long long int prime, z, multi;

int main(){
    
    for (multi = 2; multi <= num/2; multi++){ //first we find multiples of the number and store it 
                                       // in the multis array.
        if (num%multi == 0){
                      printf("multi = %d\n",multi); //debug 
                  for (z = 2; z <= multi/2; z++){
                      if( multi%z ==0){
                          flag = 1;
                      }
                  }
                  if( flag == 0){  
                      printf("prime = %d\n",multi); //debug 
                      prime = multi; // last prime number will be the highest.
                  
                  }
    }
}
    
    
    
    printf("lastprime = %d",prime);
    scanf("%d",&a); // for cmd to prevent close rightaway
}
