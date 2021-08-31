#include <stdio.h>
#include <stdint.h>


int main()
{
    uint64_t a = 200;
    uint64_t b = 100;
    uint64_t *ptr1 = &a;

    uint64_t *ptr2 = (uint64_t *)&ptr1;
    printf("A: %d B: %d ptr1: %d\n",a,b,*ptr1);
    printf("addr A: 0x%x B: 0x%x ptr1: 0x%x\n",&a,&b,&ptr1);
    *(uint64_t *)(*ptr2) = 10;
    printf("A: %d B: %d ptr1: %d\n",a,b,*ptr1);
    ptr1 = &b;
    *(uint64_t *)(*ptr2) = 20;

    printf("A: %d B: %d ptr1: %d\n",a,b,*ptr1);
    return 0;
}