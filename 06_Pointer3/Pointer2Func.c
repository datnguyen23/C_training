#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a*b;
}

float div(float a, float b)
{
    if (!b) return 0;
    return a/b;
}

// float func (float *fPayload, int *iPayload)

int main()
{
    float (*calcFunc[4]) (float a, float b) = {&add,&sub,&mul,&div};
    printf("Ket qua: %f\n",calcFunc[0](10,5));
    return 0;
}
