/* ATM
    C Practise
    ATM 01/09/25

    Trying to generate a times table program
*/

#include <stdio.h>
#include <math.h>

/* Here i attempt to output the times table for numbers 1 through 10;
I start of using redundant code by being repetitive and then I learn how to clean up and refactor
the code, and even use a 'for loop' for code readability in the 2nd phase
*/


    //the code below is repetitive, I will refactor and use a for loop below it:

/*
    int counter = 1*1
    while(counter<=1*10){
        printf("%4d ", counter);
        counter+=2;
    }
    printf("\n");
    

    counter = 2*1;

    while (counter<=2*10)
    {
        printf("%4d ", counter);
        counter+=2;
    }
    printf("\n");

    counter = 3*1;

    while (counter<=3*10)
    {
        printf("%4d ", counter);
        counter+=3;
    }
    printf("\n");

    counter = 4*1;

    while (counter<=4*10)
    {
        printf("%4d ", counter);
        counter+=4;
    }
    printf("\n");

    counter = 5*1;

    while (counter<=5*10)
    {
        printf("%4d ", counter);
        counter+=5;
    }
    printf("\n");

    counter = 6*1;

    while (counter<=6*10)
    {
        printf("%4d ", counter);
        counter+=6;
    }
    printf("\n");


    counter = 7*1;

    while (counter<=7*10)
    {
        printf("%4d ", counter);
        counter+=7;
    }
    printf("\n");

    counter = 8*1;

    while (counter<=8*10)
    {
        printf("%4d ", counter);
        counter+=8;
    }
    printf("\n");

    counter = 9*1;

    while (counter<=9*10)
    {
        printf("%4d ", counter);
        counter+=9;
    }
    printf("\n");

    counter = 10*1;

    while (counter<=10*10)
    {
        printf("%4d ", counter);
        counter+=10;
    }
    printf("\n");
    }
    */


//Refactored code for the while loop;
/*
int main(){

   int counter=1;
    int multiplier=1;
    
    while(multiplier<=10){
        counter=multiplier*1;
        while (counter<=multiplier*10){
            printf("%4d ", counter);
            counter+=multiplier;
        }
        printf("\n");
        multiplier++;
        }
        printf("Done");
        return 0;

}
*/

   /* Below I have refactored the code and made it more readable using a nested 'for loop'
    I have also tested the program for scalability by outputing a times table from 0 to 15;
    I also added functionality for the program to ask for input for the user to test the product of any 2 numbers:
   */


   int main(){

        int multiplier, counter;
        //Ask for user input
        printf("Hello user, please enter the first number: ");
        scanf("%d", &multiplier);
        printf("Thank you, please enter the second number: ");
        scanf("%d", &counter);

        //test product of the 2 user requested numbers
        printf("Your requested result is: %d\n", counter*multiplier);
        printf("\n");
        printf("\n");

        //tab formatter
        printf("\tHerewith the times table:\n");
        printf("\n");
        //Loop for each multiplier from 1 to 10
        for (multiplier = 1; multiplier <= 20; multiplier++){
            //Loop to generate times table for the current multiplier
                for (counter = 1; counter <= 20; counter++){
                    //Right-align each product to 4 spaces for neatness
                    printf("%4d ", multiplier*counter);
                }
                printf("\n"); //Jump to a new line after each iteration of the times table
                
            }
            
             printf("Done\n");
        
            return 0; 
            
   
        
        }

       
        
