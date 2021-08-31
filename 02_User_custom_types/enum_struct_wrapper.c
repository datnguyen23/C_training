/*header : thu vien*/
#include <stdio.h>
#include <string.h>

#define SO_SACH 3
/*Custom types*/
typedef enum Thu
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
}Thu;

typedef struct Book
{
    /* data */
    char tenSach[20];
    char tenTacGia[20];
    int soTrang;
    int namSX;
    Thu thuMuon;
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

/*Wrapper*/
Thu ChuyenStr2Int(char s[]);
char * ChuyenInt2Str(Thu th);

/*Thu tuc*/
void nhap(Book *s);
void xuat(Book s);
DungSai timSach(Book s, int namSx);
DungSai timSachNgay(Book s, Thu t);

/*Chuong trinh chinh*/
int main()
{
    // char tenSach[SO_SACH][20], tenTacGia[SO_SACH][20];
    // int soTrang[SO_SACH], namSX[SO_SACH];
    Book sach[SO_SACH];
    //kieu     bien;
    //float     a;
    /*********************************/
    unsigned int i;
    for (i = 0; i < SO_SACH; i++)
    {
        // nhap(tenSach[i],tenTacGia[i],&soTrang[i],&namSX[i]);
        printf("Nhap Thong tin Sach: %d\n", i+ 1);
        nhap(&sach[i]);
    }

    for (i = 0; i < SO_SACH; i++)
    {
        // xuat(tenSach[i],tenTacGia[i],soTrang[i],namSX[i]);
        if (timSach(sach[i],2000) == Dung)
        {
            printf("-----------------------------------\n");
            xuat(sach[i]);
        }
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
    printf("Nhap Ngay Muon: ");
    char temp[4];
    gets(&temp);
    s->thuMuon = ChuyenStr2Int(temp);
    fflush(stdin);
    printf("Nhap so Trang, NamSX, Thu Muon:");
    scanf("%d %d",&s->soTrang,&s->namSX);
}

char * ChuyenInt2Str(Thu th)
{
    switch (th)
    {
        case SUN:
            return "SUN\0";
        case MON:
            return "MON\0";
        case TUE:
            return "TUE\0";
        case WED:
            return "WED\0";
        case THU:
            return "THU\0";
        case FRI:
            return "FRI\0";
        case SAT:
            return "SAT\0";
        default:
            break;
    }
}

Thu ChuyenStr2Int(char s[])
{
    if (strcmp(s,"SUN")==0)
        return SUN;
    if (strcmp(s,"MON")==0)
        return MON;
    if (strcmp(s,"TUE")==0)
        return TUE;
    if (strcmp(s,"WED")==0)
        return WED;
    if (strcmp(s,"THU")==0)
        return THU;
    if (strcmp(s,"FRI")==0)
        return FRI;
    if (strcmp(s,"SAT")==0)
        return SAT;
}

void xuat(Book s)
{
     printf("Ten sach: %s\ntac gia: %s\nso trang: %d\nnamsx: %d\nThuMuon: %s\n",\
                s.tenSach,\
                s.tenTacGia, \
                s.soTrang, \
                s.namSX,\
                ChuyenInt2Str(s.thuMuon));
}

DungSai timSach(Book s, int namSx)
{
    if (s.namSX == namSx)
        return Dung;
    return Sai;
}

DungSai timSachNgay(Book s, Thu t)
{
    if (s.thuMuon == t) /*if (strcmp(s.thuMuon,t) == 0)*/
        return Dung;
    return Sai;
}

