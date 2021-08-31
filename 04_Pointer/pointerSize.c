#include <stdio.h>
#include <stdint.h>

typedef struct A
{
    int a;
    char b;
    float c;
    uint64_t d;
}A;

int main()
{
    A a ={0};
    A *ptrA = &a;
    uint8_t *ptr2 = &a;
    int16_t *ptr1 = &a;
    printf("size A: %d ptr1: %d ptr2: %d ptrA: %d\n",sizeof(a),sizeof(ptr1),sizeof(ptr2),sizeof(ptrA));

    return 0;
}