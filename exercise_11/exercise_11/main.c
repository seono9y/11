//
//  main.c
//  exercise_11
//
//  Created by 추서연 on 2023/11/19.
//

#include <stdio.h>

int main(void) {
    int i;
    int grade[5];
    float sum = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter grade[%d]: ", i);
        scanf("%d", &grade[i]);
    }
    int *ptr = grade;
    for (i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }
    float average = sum / 5;
       printf("Average: %.2f\n", average);

       return 0;
   }
