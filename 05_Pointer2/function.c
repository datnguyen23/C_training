#include <stdio.h>

void SaySomeThing(char text[]); //declare

void swap(int* a, int* b)
{
    printf("before swap: a %d, b %d\n",*a,*b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap: a %d, b %d\n",*a,*b);
}

int main()
{
    int a = 10;
    int b = 20;
    swap(&a,&b);
    printf("after call swap: a %d, b %d\n",a,b);
    SaySomeThing("Test pointer as function parameter");
    return 0;
}

void SaySomeThing(char text[]) //define
{
    printf("%s\n",text);
}