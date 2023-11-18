//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main(void) {
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("a:%i, b:%i\n", a, b);
}
