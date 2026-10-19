#include <stdio.h>

int main(){
    float cgpa = 9.3f;
    float *ptr = &cgpa;

    printf("%.1f\n",cgpa);
    return 0;
}