#include <stdio.h>
#include <stdint.h>


int main()
{
    uint8_t a =200;
    uint8_t *ptr2 = &a;
    int8_t *ptr1 = &a;
    printf("A: %d ptr1: %d ptr2: %d\n",a,*ptr1,*ptr2);

    return 0;
}