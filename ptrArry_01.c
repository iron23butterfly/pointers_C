#include <stdio.h>

void    main ()
{
    int a[] = {4,34,32,41,15};
    int * p = a;
    
    printf("\np[0] %d", p[0]);
    printf("\np[1] %d", p[1]);
    printf("\np[2] %d", p[2]);
    printf("\np[3] %d", p[3]);
    printf("\np[4] %d", p[4]);
    printf("\n*p %d", *p);
    printf("\np %d", p);
    printf("\na %d", a);
    printf("\n*a %d", *a);
    
//    printf("\n*p[1] %d", *p[1]);
/*  The above line will throw an eror as 
    pointer to 1D array is a single and not an array!
    It points to the array, hence p[1] = a[1],
*/
}

/*
OUTPUT

p[0] 4                                                                                                                           
p[1] 34                                                                                                                          
p[2] 32                                                                                                                          
p[3] 41                                                                                                                          
p[4] 15                                                                                                                          
*p 4                                                                                                                             
p 362685088                                                                                                                      
a 362685088                                                                                                                      
*a 4

*/
