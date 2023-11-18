//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>
int main(void)
{
    char *pc;
    int *pi;
    double *pd;
    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf("증가 전 : pc = %s, pi = %d, pd = %d\n", pc, pi, pd);
    pc++;
    pi++;
    pd++;
    printf("증가 후 : pc = %s, pi = %d, pd = %d\n", pc, pi, pd);
    return 0;
}
