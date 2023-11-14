//this program checks that the given input by user is even or not.

#include <stdio.h>

int main(void){
    int number;
    int count = 2;
    
    
    printf("Welcome to the prime checker app. \n");
    printf("Please enter the number that you want to check. \n");
    scanf("%d", &number);
    
    for(count=2;count<number;count++){
        
        if(number % count == 0){
            printf("%d is NOT a prime number. ", number);
            return 1;
        }
    }
    printf("%d is a PRIME number. ",number);
    
 
    
    
    
    return 0;
}
