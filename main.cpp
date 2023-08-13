#include "mbed.h"

// Fibonacci numbers 0,1,1,2,3,5,8,13,21,34

// main() runs in its own thread in the OS

// n=1 gives 0
// n=2 gives 1
// n=3 gives 1
// n=4 gives 2

// Recursive function is a function that references itself

int fib(int n) {
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return (fib(n-1) + (fib(n-2)));
}



int main()
{

    printf("Fibonacci numbers using a recursive function \r\n");

    int max_term = 10;
    for(int i=1; i<=max_term; i++){
        printf("%d, ", fib(i));
 
       }
    printf ("\r\n");
    while (true) {

    }

}