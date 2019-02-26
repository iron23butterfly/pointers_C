#include <stdio.h>

int sumOfArrayElements (int arraySize, int *firstAddr)
{
    int i;
    int sum = 0;
    
    for (i=0;i<arraySize;i++)
    {
        sum = sum + *(firstAddr+i);
        /*
        this can also be coded as below:
        */
//        sum = sum + firstAddr[i];
    }
    
    return sum;
}

void    main ()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(int);
 //   printf("\nsize of array: %d", size);
    int sum = sumOfArrayElements(size, a);
    printf("\nsum %d", sum);
}

/*
OUTPUT

sum = 15
*/
