#include<stdio.h>
#define k 10 // Use a constant instead of a variable
int main()
{
    register int i=0; // Use a register variable for the loop counter
    for(i;i<k;i++) // Use k instead of 10
    {
        printf("%d",i); // Use %d instead of i to print an integer
    }
}

