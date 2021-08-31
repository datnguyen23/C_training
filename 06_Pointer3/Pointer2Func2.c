#include <stdio.h>

#define NUM_OF_BOOK 2

typedef struct BOOK
{
    char    name[20];
    char    authName[20];
    int     namXB;
    int     numOfPage;
    void    (*printBook)(void);
}BOOK;


void printOut(void);
BOOK sach1 = {"SACH1","Kiet",2002,2,&printOut};

int main()
{
    sach1.printBook();
    return 0;
}

void printOut(void)
{
    printf("Ten Sach: %s\n", sach1.name);
    printf("Ten Tac Gia: %s\n", sach1.authName);
    printf("Nam xuat Ban: %d\n", sach1.namXB);
    printf("So Trang: %d\n", sach1.numOfPage);   
}