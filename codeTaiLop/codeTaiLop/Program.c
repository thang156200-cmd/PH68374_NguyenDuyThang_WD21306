// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

void laplai(void(*hamchucnang)())
{
    char tieptuc;

    do {
        hamchucnang();
        printf("\nBan co muon tiep tuc chuc nang nay khong? (y/n): ");
        scanf_s(" %c", &tieptuc);

    } while (tieptuc == 'y' || tieptuc == 'Y');
}
void kiemtrasonguyen()
{
    printf("\n => Kiem tra so nguyen\n");
}
void timuocchungvaboichung()
{
    printf("\n => Tim uoc chung va boi chung cua 2 so\n");
}
void tinhtienquankaraoke()
{
    printf("\n => Chuong trinh tinh tien cho quan karaoke\n");
}
void tinhtiendien()
{
    printf("\n => Tinh tien dien");
}
void chucnangdoitien()
{
    printf("\n => Chuc nang doi tien\n");
}
void laisuavaynganhang()
{
    printf("\n =>  Lai suat vay ngan hang\n");
}
void vaytienmuaxe()
{
    printf("\n =>  Vay tien mua xe\n");
}
void xapxepthontinsinhvien()
{
    printf("\n => TXap xep thong tin sinh vien\n");
}
void xaydunggame()
{
    printf("\n =>  Xay dung game FPOLY-LOTT (2/15)\n");
}
void xaydungchuongtrinhtinhtoanphanso()
{
    printf("\n => Xay dung chuong trinh tinh toan phan so\n");
}

int main()
{
    int chon;

    do
    {

        printf("\n>>>>>> MENU <<<<<<\n");
        printf("\n1. kiem tra so nguyen ");
        printf("\n2. Tim uoc chung va boi chung cua 2 so ");
        printf("\n3. Chuong trinh tinh tien cho quan karaoke ");
        printf("\n4. Tinh tien dien ");
        printf("\n5. Chuc nang doi tien ");
        printf("\n6. Lai suat vay ngan hang ");
        printf("\n7. Vay tien mua xe ");
        printf("\n8. Xap xep thong tin sinh vien ");
        printf("\n9. Xay dung game FPOLY-LOTT (2/15) ");
        printf("\n10. Xay dung chuong trinh tinh toan phan so ");
        printf("\n0. Thoat");
        printf("\nMoi chon chuc nang: ");

        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            laplai(kiemtrasonguyen);
            break;
        case 2:
            laplai(timuocchungvaboichung);
            break;
        case 3:
            laplai(tinhtienquankaraoke);
            break;
        case 4:
            laplai(tinhtiendien);
            break;
        case 5:
            laplai(chucnangdoitien);
            break;
        case 6:
            laplai(laisuavaynganhang);
            break;
        case 7:
            laplai(vaytienmuaxe);
            break;
        case 8:
            laplai(xapxepthontinsinhvien);
            break;
        case 9:
            laplai(xaydunggame);
            break;
        case 10:
            laplai(xaydungchuongtrinhtinhtoanphanso);
            break;
        case 0:
            printf("Thoat");
            break;
        default:
            printf("\n => Khong co trong MENU ");
            break;
        }

    } while (chon != 0);
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