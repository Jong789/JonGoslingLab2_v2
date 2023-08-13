#include "mbed.h"

// Fibonacci numbers 0,1,1,2,3,5,8,13,21,34

// main() runs in its own thread in the OS

int main()
{

    printf("Fibonacci numbers using simple loop \r\n");

// define variables

    int final_term = 10;
    int term1 = 0;
    int term2 = 1;
    int nextterm = 0;

    // write loop to output first 2 terms and to calculate the remaining terms up to 10 terms

    for(int i=1; i<final_term; i++)
    
    {

        if(i==1)
        printf("%d \n",term1);
        if(i==2)
        printf("%d \n",term2);
        
        else
        {

            nextterm = term1 + term2;
            term1 = term2;
            term2 = nextterm;
            printf("%d \n", nextterm);

        }
    }

}