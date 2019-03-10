#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    int A = *((int*)a); //type-casting and getting the value
    int B = *((int*)b);
    return B-A; // descending
//    return A-B; // ascending
}

int main()
{
    int i, A[] = {-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;i++)
        printf("%d ",A[i]);
}

/*
OUTPUT

50 22 4 -1 -6 -31
*/
