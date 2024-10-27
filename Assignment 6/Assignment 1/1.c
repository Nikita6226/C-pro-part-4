// finding Farenhit from Celcious
// (0degree*9/5) + 32 = 32 degree F
// with para without retun
#include <stdio.h>

void farenhit(float celsius, float *res);

int main() {
    float res;
    float celsius = 23;
    farenhit(celsius, &res);
    printf("Temp in F = %.2f\n", res);
    return 0;
}

void farenhit(float celsius, float *res) {
    *res = (celsius * 9 / 5) + 32;
}

//all 4 assignment in type 3 convert into pointer
