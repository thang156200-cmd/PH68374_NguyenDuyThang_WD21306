// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

void chucnang2chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang[%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", array[i][j]);
        }
        printf("\n");
    }
}
void demoSetring()
{
    // string 
    char name[50] = "A Thang";//{ 'T', 'h', 'a', 'n', 'g' };"A thang"
    //gest(name);
    //fgest(name);

    while (getchar() != '\n')
    {
        printf("%s", getchar());
    }

    printf("nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    // xuat du lieu = for + printf
    for (int i = 0; i < 50; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    //puts(name);
}

int main()
{
    int chon;
        printf(">>>> Menu <<<<<");
        printf("0.Thoat");
        printf("\n1.Chuc nang 2 chieu");
        printf("\n2.demoString\n");

        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            chucnang2chieu();
            break;
        case 2:
            demoSetring();
            break;
        default:
            printf("Khong co trong Menu");
            break;
        }
}


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184