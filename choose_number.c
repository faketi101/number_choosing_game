#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand()%100;
    
    int guessed, tried=1;
        printf("Welcome to Number Guessing Game \n");
        
    do{
        printf("Enter a Number less than 100: \n");
        scanf("%d", &guessed);
        printf("%d\n", number);
        if(guessed < number){
            printf("This Number is less\n");
        }
        else if(guessed > number){
            printf("This Number is big\n");
        }
        else{
            printf("Congrats you won the game in %d attempts\n", tried);
        }
        tried++;
    }
    while(guessed != number);
    
    
    return 0;
}
