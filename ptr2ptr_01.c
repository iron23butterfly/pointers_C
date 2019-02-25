#include <stdio.h>

void    main ()
{
    int x;
    x   =   10;
    int *   p;
    p   =   &x;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    printf("\nx = %d", x);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nr = %d", r);
    printf("\n*p = %d", *p);
    printf("\n*q = %d", *q);
    printf("\n*r = %d", *r);
    *p = 11;
    printf("\nx = %d", x);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nr = %d", r);
    printf("\n*p = %d", *p);
    printf("\n*q = %d", *q);
    printf("\n*r = %d", *r);
    **q = 12;
    printf("\nx = %d", x);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nr = %d", r);
    printf("\n*p = %d", *p);
    printf("\n*q = %d", *q);
    printf("\n*r = %d", *r);
    ***r = 13;
    printf("\nx = %d", x);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nr = %d", r);
    printf("\n*p = %d", *p);
    printf("\n*q = %d", *q);
    printf("\n*r = %d", *r);
}
