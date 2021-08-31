#include <stdio.h>

int main()
{
    int a = 10;
    int b = 15;
    printf("Gia tri A: %d, addr 0x%x\n",a,&a);
    int *ptr = &a;
    printf("Gia tri ptr: %d, addr 0x%x\n",ptr,&ptr);
    *ptr = 20;
    printf("Gia tri A: %d, addr 0x%x\n",a,&a);


    printf("Gia tri B: %d, addr 0x%x\n",b,&b);
    ptr = &b;
    printf("Gia tri ptr: %d, addr 0x%x\n",ptr,&ptr);
    *ptr = 30;
    printf("Gia tri B: %d, addr 0x%x\n",b,&b);
    return 0;
}