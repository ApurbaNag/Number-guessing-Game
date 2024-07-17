#include <stdio.h>
#include <stdlib.h>
/*stdlib.h is used for memory allocation, for random number generation,
process control(termination of process ) */
#include <time.h>
/*use to acess the time and use it*/

int main() {
    int guessed_no,no_of_guesses,random_number;
    // Initialize random number generator
    srand(time(0));//it initializes the first number to be taken(https://www.youtube.com/watch?v=oXEDMNXzuo4)

    // Generate random number between 1 and 100
    random_number = rand() % 100 + 1;
    //int upper = 20,int lower =10;
    //int number=(rand()%(upper- lower+1))+lower;

    // Print the random number
    //printf("%d\n", random_number);
    
    
    do{
        printf("guess the number:\n");
        scanf("%d",&guessed_no);

        if(guessed_no > random_number ){
            printf("lower the number\n");
        }
        else if(guessed_no < random_number){
            printf("higher the number\n");
        }
        no_of_guesses++;
    }
    while(guessed_no!=random_number);
printf("No of guess=%d\n",no_of_guesses);

    
} 
