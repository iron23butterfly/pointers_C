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
    printf("x = %d", x);
    printf("p = %d", p);
    printf("q = %d", q);
    printf("r = %d", r);
}
