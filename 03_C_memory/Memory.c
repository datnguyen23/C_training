#include <stdio.h>

int b = 20;

void func1()
{
    int a = 0;
    static int d = 0;
    
    printf("FUN 1 dia chi A la: %d d: %d\n",&a,&d);
    printf("FUN 1 gia tri A la: %d d: %d\n",a,d);
    a++;
    d++;
}

void func2()
{
    int c;
    int a;
    int d;
    printf("FUN2 dia chi A la: %d B: %d C:\n",&a,&d,&c);
}

int main()
{
    int c = 11;
    printf("dia chi C %d\n",&c);
    //printf("D: %d",d); -> loi
    printf("dia chi B Global %d\n",&b);
    func1();
    func2();
    func1();
    return 0;
}