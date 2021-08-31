#include <stdio.h>

#define NUM_OF_BOOK 2

typedef struct BOOK
{
    char    name[20];
    char    authName[20];
    int     namXB;
    int     numOfPage;
}BOOK;

BOOK input(void);

void printOut(const BOOK *b, int numOfBook);

int main()
{
    BOOK sach1 = {"SACH1","Kiet",2002,2};
    BOOK sach2 = {"SACH2","Anh",1999,4}; 
    BOOK array[NUM_OF_BOOK] = { {"SACH3","Thuy",2002,4}, 
                                {"SACH4","Tuyen",2002,4}};
    printOut(&sach1,1);
    printOut(&sach2,1);
    printOut(&array,NUM_OF_BOOK);
    return 0;
}

void printOut(const BOOK *b,int numOfBook)
{
    for (int i = 0; i < numOfBook; i++)
    {
        printf("Ten Sach: %s\n", (b + i)->name);
        printf("Ten Tac Gia: %s\n", (b + i)->authName);
        printf("Nam xuat Ban: %d\n", (b + i)->namXB);
        printf("So Trang: %d\n", (b + i)->numOfPage);
    }
}

BOOK input(void)
{
    BOOK a;
    fflush(stdin);
    scanf("%s",&a.name);
    fflush(stdin);
    scanf("%s",&a.authName);
    fflush(stdin);
    scanf("%d",&a.namXB);
    scanf("%d",&a.numOfPage);
    return a;
}