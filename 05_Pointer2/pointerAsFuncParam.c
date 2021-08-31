#include <stdio.h>

#define ARRAY_LEN 5

// void copyArray(int *ptr, int *ptr2, int len); //declare
void copyArray(int ptr[], int ptr2[], int len); //declare


int main()
{
    int a[ARRAY_LEN] = {3,4,2,1,5};
    int b[ARRAY_LEN] = {0};
    for(int i =0 ; i<ARRAY_LEN; i++)
    {
        printf("\t%d",b[i]);
    }

    copyArray(b,a,ARRAY_LEN);
    printf("\n");
    for(int i =0 ; i<ARRAY_LEN; i++)
    {
        printf("\t%d",b[i]);
    }
    return 0;
}

// void copyArray(int *ptr, int *ptr2, int Len) //define
void copyArray(int ptr[], int ptr2[], int len) //define
{
    int i = 0;
    for (i = 0; i < len; i ++)
    {
        ptr[i] = ptr2[i]; //or *(ptr + i) = *(ptr2 + i);
    }
}