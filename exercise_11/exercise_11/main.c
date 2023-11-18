//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>
#include <stdio.h>
int main(void)
{
    int i = 100;
    int *p = &i;
    int **q = &p;
    
    *p = 200;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    
    **q = 300;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    
    return 0;
}
