// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void laplai(void(*hamchucnang)())
{
    char tieptuc;

    do {
        hamchucnang();
        printf("\nBan co muon tiep tuc chuc nang nay khong? (y/n): ");
        scanf_s(" %c", &tieptuc);

    } while (tieptuc == 'y' || tieptuc == 'Y');
}
bool isPrime(int n) {//kiem tra so nguyen to
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
        return false;
    }
    return true;
}
bool isPerfectSquare(int n) {//kiem tra so chinh phuong
    if (n < 0) return false;
    int sq;
        sq = (int)sqrt(n);
    return sq * sq == n;
}
void kiemtrasonguyen()
{
    printf("\n => Kiem tra so nguyen\n");
    int x;
    printf("Vui long nhap so: ");
    //kiem tra co phai so nguyen khong
    if (scanf_s("%d", &x) != 1) {
        printf("Gia tri nhap vao khong phai la so nguyen.\n");
        while (getchar() != "\n"); //xoa ky tu thua
        return;
    }
    printf("Gia tri nhap vao la so nguyen: %d \n", x);
    //kiem tra so nguyen to
    
        if (isPrime(x))
            printf("%d la so nguyen to\n", x);
        else
            printf("%d khong phai la so nguyen to\n", x);
    
    //kiem tra so chinh phuong
    
        if (isPerfectSquare(x))
            printf("%d la so chinh phuong\n", x);
        else
            printf("%d khong phai la so chinh phuong\n", x);
    
}
void timuocchungvaboichung()
{
    printf("\n => Tim uoc chung va boi chung cua 2 so\n");
    int x, y, a, b, UCLN, BSCNN;

    // Nhập 2 số nguyên
    printf("Nhap so thu nhat: ");
    scanf_s("%d", &x);
    printf("Nhap so thu hai: ");
    scanf_s("%d", &y);

    a = x;
    b = y;

    // Tính UCLN  bằng thuật toán Euclid
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    UCLN = a;

    // Tính BSCNN
    BSCNN = (x * y) / UCLN;

    // Xuất kết quả
    printf("Uoc so chung lon nhat  cua %d và %d la: %d\n", x, y, UCLN);
    printf("Boi so chung nho nhat cua %d và %d la: %d\n", x, y, BSCNN);

    return 0;
}
void tinhtienquankaraoke()
{
    printf("\n => Chuong trinh tinh tien cho quan karaoke\n");
#include <stdio.h>

    
        int gioBatDau, gioKetThuc;
        float tien, soGio, tienGioDau = 150000;

        printf("Nhap gio bat dau (12-23): ");
        scanf_s("%d", &gioBatDau);

        printf("Nhap gio ket thuc (12-23): ");
        scanf_s("%d", &gioKetThuc);

        // Kiểm tra giờ hợp lệ
        if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc > 23) {
            printf("Gio bat dau va ket thuc phai trong khoang 12 den 23.\n");
            return 0;
        }

        // Kiểm tra giờ kết thúc sau giờ bắt đầu
        if (gioKetThuc <= gioBatDau) {
            printf("Gio ket thuc phai sau gio bat dau.\n");
            return 0;
        }

        // Tính số giờ
        soGio = gioKetThuc - gioBatDau;

        // Tính tiền
        if (soGio <= 3) {
            tien = soGio * tienGioDau;
        }
        else {
            tien = 3 * tienGioDau; // 3 giờ đầu
            tien += (soGio - 3) * tienGioDau * 0.7; // từ giờ thứ 4 giảm 30%
        }

        // Giảm thêm 10% nếu giờ bắt đầu từ 14 đến 17
        if (gioBatDau >= 14 && gioBatDau <= 17) {
            tien *= 0.9;
        }

        printf("So tien can thanh toan: %.0f VND\n", tien);

        return 0;
}
void tinhtiendien()
{
    printf("\n => Tinh tien dien\n");
        int kwh;
        double total = 0;

        printf("Nhap so kWh su dung: ");
        scanf_s("%d", &kwh);

        if (kwh < 0) {
            printf("So kWh khong hop le!\n");
            return 0;
        }

        int remaining = kwh;

        // Bậc 1: 0 - 50 kWh
        if (remaining > 0) {
            int used = remaining > 50 ? 50 : remaining;
            total += used * 1678;
            remaining -= used;
        }

        // Bậc 2: 51 - 100 kWh
        if (remaining > 0) {
            int used = remaining > 50 ? 50 : remaining;
            total += used * 1734;
            remaining -= used;
        }

        // Bậc 3: 101 - 200 kWh
        if (remaining > 0) {
            int used = remaining > 100 ? 100 : remaining;
            total += used * 2014;
            remaining -= used;
        }

        // Bậc 4: 201 - 300 kWh
        if (remaining > 0) {
            int used = remaining > 100 ? 100 : remaining;
            total += used * 2536;
            remaining -= used;
        }

        // Bậc 5: 301 - 400 kWh
        if (remaining > 0) {
            int used = remaining > 100 ? 100 : remaining;
            total += used * 2834;
            remaining -= used;
        }

        // Bậc 6: 401 trở lên
        if (remaining > 0) {
            total += remaining * 2927;
        }

        printf("\nSo tien dien phai tra: %.0f dong\n", total);

        return 0;
}
void chucnangdoitien()
{
    printf("\n => Chuc nang doi tien\n");
        int money;
        int denominations[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        int count[9] = { 0 };

        printf("Nhap so tien can doi: ");
        scanf_s("%d", &money);

        int temp = money;

        for (int i = 0; i < 9; i++) {
            if (temp >= denominations[i]) {
                count[i] = temp / denominations[i];
                temp = temp % denominations[i];
            }
        }

        printf("\nDoi %d thanh:\n", money);
        for (int i = 0; i < 9; i++) {
            if (count[i] > 0) {
                printf("%d to menh gia %d\n", count[i], denominations[i]);
            }
        }

        return 0;
    

}
void laisuavaynganhang()
{
    printf("\n =>  Lai suat vay ngan hang\n");
        double tienVay;
        double laiSuat = 0.05;   // 5% / tháng
        int kyHan = 12;

        printf("Nhap so tien muon vay: ");
        scanf_s("%lf", &tienVay);

        double gocPhaiTra = tienVay / kyHan;
        double soTienConLai = tienVay;

        printf("\n%-10s %-15s %-15s %-20s %-20s\n",
            "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");

        for (int thang = 1; thang <= kyHan; thang++) {
            double laiPhaiTra = soTienConLai * laiSuat;
            double soTienPhaiTra = laiPhaiTra + gocPhaiTra;
            soTienConLai -= gocPhaiTra;

            if (soTienConLai < 0) soTienConLai = 0;

            printf("%-10d %-15.0f %-15.0f %-20.0f %-20.0f\n",
                thang, laiPhaiTra, gocPhaiTra, soTienPhaiTra, soTienConLai);
        }

        return 0;
}
void vaytienmuaxe()
{
    printf("\n =>  Vay tien mua xe\n");
        float phanTramVay;
        const double tienVay = 500000000; // 500 triệu VND
        const int thoiHan = 24; // 24 năm
        const double laiSuatNam = 0.072; // 7.2%

        printf("Nhap phan tram vay toi da (vi du 80): ");
        scanf_s("%f", &phanTramVay);

        double tienTraTruoc = tienVay * (1 - phanTramVay / 100);
        double tienVayHienTai = tienVay * (phanTramVay / 100);

        int tongThang = thoiHan * 12;
        double laiSuatThang = laiSuatNam / 12;

        // Công thức tính tiền trả hàng tháng cho khoản vay cố định
        double tienTraHangThang = tienVayHienTai * (laiSuatThang * pow(1 + laiSuatThang, tongThang)) / (pow(1 + laiSuatThang, tongThang) - 1);

        printf("\nTien phai tra lan dau (tra truoc): %.0f VND\n", tienTraTruoc);
        printf("Tien phai tra hang thang: %.0f VND\n", tienTraHangThang);

        return 0;
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
    printf(" \n=> Xay dung chuong trinh tinh toan phan so\n");
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