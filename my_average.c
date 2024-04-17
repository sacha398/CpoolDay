#include <stdlib.h>
#include <stdio.h>

float my_average(int *grades, int count){
    float cmp = 0;
    for(int i = 0; i < count; i++){
        cmp += grades[i];
    }
    return cmp/count;
}