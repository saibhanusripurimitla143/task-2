/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int  num,guess;
    int attempts=0;
    srand(time(0));
    num=rand()%100 + 1;
    printf("Welcome to Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");
    do
    {
        printf("\nEnter your guess: ");
        scanf("%d",&guess);
        attempts++;
        if(guess>num)
        {
            printf("too high...try again\n");
        }
        else if(guess<num)
        {
            printf("too low try again\n");
        }
        else
        {
            printf("congratulations...you guessed the correct number\n");
            printf("you guessed it in %d attempts\n",attempts);
        }
    
    } while(guess!=num);
    printf("thank you for playing\n");
    return 0;
}



