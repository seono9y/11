//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';
    int *iptr2;
    char *cptr2;
    iptr2 = &i;
    cptr2 = &c;
    printf("i : %p\n%p (size:%lu)\n", iptr2, &i, sizeof(iptr2));
    printf("c : %p\n%p (size:%lu)\n", cptr2, &c, sizeof(cptr2));
    printf("iptr2 : %p, %i\n", iptr2, *iptr2);
    return 0;
}
