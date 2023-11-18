//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>

int main(void) {
    int i = 300; //300으로 변경해서도 해보기
    int *pi = &i;
    char *pc = &i;
    printf("%i, %i, %i\n", i, *pi, *pc);
}
