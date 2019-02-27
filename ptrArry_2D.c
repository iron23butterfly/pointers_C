#include <stdio.h>

void    main ()
{
    int B[2][3] = {{1,2,3},{4,5,6}};
    int * p = B;
    
    printf("\nB %d", B);
    printf("\n*B %d", *B);
    printf("\nB[0] %d", B[0]);
    printf("\n&B[0] %d", &B[0]);
    printf("\n*B[0] %d", *B[0]);
    printf("\nB[0][0] %d", B[0][0]);
    
    // printf("\n*B[0][0] %d", *B[0][0]);
    // above is not permitted as the array cannot be accessed like its Pointer
    
    printf("\n&B[0][0] %d", &B[0][0]);
    printf("\nB+1 %d", (B+1));
    printf("\n*(B+1) %d", *(B+1));
    printf("\nB[1] %d", B[1]);
    printf("\n*B[1] %d", *B[1]);
    printf("\np %d", p);
    printf("\n*p %d", *p);
    
    
    
    printf("\n\n Pointer to 2D arrays");
    int (*p1)[3] = B;   // defines the column
    
    printf("\nB %d", B);
    printf("\n*B %d", *B);
    printf("\nB[0] %d", B[0]);
    printf("\n&B[0] %d", &B[0]);
    printf("\n*B[0] %d", *B[0]);
    printf("\nB[0][0] %d", B[0][0]);
    printf("\n&B[0][0] %d", &B[0][0]);
 //   printf("\n*B[0][0] %d", *B[0][0]);
 // B[][] is 2Darray not pointer
    printf("\np1 %d", p1);
    printf("\n*p1 %d", *p1);
    printf("\n*p1[0] %d", *p1[0]);
    printf("\n*p1[1] %d", *p1[1]);
    printf("\n*p1[2] %d", *p1[2]);
    printf("\np1[0][1] %d", p1[0][1]);
    printf("\np1[1][1] %d", p1[1][1]);

//    printf("\n*p1[1][1] %d", *p1[1][1]);
/*
The above statement will give an error as the pointer array is 1D
*/
}


/* 
OUTPUT

B 907731984                                                                                                                      
*B 907731984                                                                                                                     
B[0] 907731984                                                                                                                   
&B[0] 907731984                                                                                                                  
*B[0] 1                                                                                                                          
B[0][0] 1                                                                                                                        
&B[0][0] 907731984                                                                                                               
B+1 907731996                                                                                                                    
*(B+1) 907731996                                                                                                                 
B[1] 907731996                                                                                                                   
*B[1] 4                                                                                                                          
p 907731984                                                                                                                      
*p 1

 Pointer to 2D arrays                                                                                                            
B 907731984                                                                                                                      
*B 907731984                                                                                                                     
B[0] 907731984                                                                                                                   
&B[0] 907731984                                                                                                                  
*B[0] 1                                                                                                                          
B[0][0] 1                                                                                                                        
&B[0][0] 907731984                                                                                                               
p1 907731984                                                                                                                     
*p1 907731984                                                                                                                    
*p1[0] 1                                                                                                                         
*p1[1] 4                                                                                                                         
*p1[2] 0                                                                                                                         
p1[0][1] 2                                                                                                                       
p1[1][1] 5
*/
