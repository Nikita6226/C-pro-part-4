// Finding area and perimeter of rectangle or Circle
// flowchart
#include <stdio.h>

void periC(int *r);
void periR(int *l, int *w);
void areaC(int *r);
void areaR(int *l, int *w);

int main()
{
    int l = 10, w = 5, r = 5;

    periC(&r);
    periR(&l, &w);
    areaC(&r);
    areaR(&l, &w);

    return 0;
}

// Perimeter of rectangle
void periR(int *l, int *w)
{
    int rperi = 2 * (*l + *w);
    if ((*l) > 0 && (*w) > 0)
    {
        printf("\nPerimeter of Rectangle = %d", rperi);
    }
    else
    {
        printf("\nInvalid dimensions!");
    }
}

// Area of rectangle
void areaR(int *l, int *w)
{
    int rarea = (*l) * (*w);
    if ((*l) > 0 && (*w) > 0)
    {
        printf("\nArea of Rectangle = %d", rarea);
    }
    else
    {
        printf("\nInvalid dimensions!");
    }
}

// Area of circle
void areaC(int *r)
{
    // Using double to avoid integer division issue
    double carea = 3.14 * (*r) * (*r);
    if (*r > 0)
    {
        printf("\nArea of Circle = %.2f", carea);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}

// Perimeter of circle
void periC(int *r)
{
    // Using double to avoid integer division issue
    double cperi = 2 * 3.14 * (*r);
    if (*r > 0)
    {
        printf("\nPerimeter of Circle = %.2f", cperi);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}
