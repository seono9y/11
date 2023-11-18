//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>

char *proverb = "All that glisters is not gold.";

void setPointer(char **q) {
    *q = proverb;
}

int main(void) {
    char *p = "zzz";
    setPointer(&p);
    printf("%s \n", p);
    return 0;
}
