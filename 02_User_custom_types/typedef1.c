/*header : thu vien*/
#include <stdio.h>

#define SO_SACH 3
/*Custom types*/
typedef struct Book
{
    /* data */
    char tenSach[20];
    char tenTacGia[20];
    int soTrang;
    int namSX;
}Book;

typedef enum DungSai
{
    Sai = 0,
    Dung = 1
}DungSai;


/*Khai bao bien toan cuc*/


/*Khai bao ham*/
// void nhap(char tenSach[], char tenTacGia[], int *soTrang, int *namSX);
// void xuat(char tenSach[], char tenTacGia[], int soTrang, int namSX);

void nhap(Book *s);
void xuat(Book s);
DungSai timSach(Book s, int namSx);

/*Chuong trinh chinh*/
int main()
{
    // char tenSach[SO_SACH][20], tenTacGia[SO_SACH][20];
    // int soTrang[SO_SACH], namSX[SO_SACH];
    Book sach[SO_SACH];
    //kieu     bien;
    //float     a;
    /*********************************/
    int i;
    for (i = 0; i < SO_SACH; i++)
    {
        // nhap(tenSach[i],tenTacGia[i],&soTrang[i],&namSX[i]);
        nhap(&sach[i]);
    }

    for (i = 0; i < SO_SACH; i++)
    {
        // xuat(tenSach[i],tenTacGia[i],soTrang[i],namSX[i]);
        if (timSach(sach[i],2000) == Dung)
            xuat(sach[i]);
    }

    return 0;
}

/*Dinh nghia ham*/
// void nhap(char tenSach[], char tenTacGia[], int *soTrang, int *namSX)
// {
//     printf("Nhap Ten sach, tac gia, so trang, namsx: ");
//     fflush(stdin);
//     scanf("%s %s %d %d",&tenSach,&tenTacGia, soTrang, namSX);
// }

// void xuat(char tenSach[], char tenTacGia[], int soTrang, int namSX)
// {
//     printf("Ten sach: %s\ntac gia: %s\nso trang: %d\nnamsx: %d\n",tenSach,tenTacGia, soTrang, namSX);
// }

void nhap(Book *s)
{
    fflush(stdin);
    printf("Nhap Ten Sach: ");
    gets(s->tenSach);
    fflush(stdin);
    printf("Nhap Ten Tac Gia: ");
    gets(s->tenTacGia);
    fflush(stdin);
    printf("Nhap so Trang, NamSX:");
    scanf("%d %d",&s->soTrang,&s->namSX);
}

void xuat(Book s)
{
     printf("Ten sach: %s\ntac gia: %s\nso trang: %d\nnamsx: %d\n",s.tenSach,s.tenTacGia, s.soTrang, s.namSX);
}

DungSai timSach(Book s, int namSx)
{
    if (s.namSX == namSx)
        return Dung;
    return Sai;
}