// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
void laplai(void(*hamchucnang)())
{
	
	char tieptuc;
	do
	{
		hamchucnang();
		printf("\nBan co muon tiep tuc chuc nang nay khong (y/n): ");
		scanf_s(" %c", &tieptuc);
	} while (tieptuc == 'y');
}

void thongTinThuCung()
{
	int ma1,ma2,ma3, nam1,nam2,nam3;
	char ten1[50], ten2[50], ten3[50];
	int tuoi1 = 0, tuoi2 = 0, tuoi3 = 0;
	while (getchar() != '\n')
	{
		printf("%c", getchar());
	}
	printf("Vui long nhap ten thu cung 1: ");
	fgets(ten1, sizeof(ten1), stdin);
	printf("Vui long nhap ma thu cung 1: ");
	scanf_s("%d", &ma1);
	printf("Vui long nhap nam sinh thu cung 1: ");
	scanf_s("%d", &nam1);
	while (getchar() != '\n')
	{
		printf("%c", getchar());
	}
	printf("Vui long nhap ten thu cung 2: ");
	fgets(ten2, sizeof(ten2), stdin);
	printf("Vui long nhap ma thu cung 2: ");
	scanf_s("%d", &ma2);
	printf("Vui long nhap nam sinh thu cung 2: ");
	scanf_s("%d", &nam2);
	while (getchar() != '\n')
	{
		printf("%c", getchar());
	}
	printf("Vui long nhap ten thu cung 3: ");
	fgets(ten3, sizeof(ten3), stdin);
	printf("Vui long nhap ma thu cung 3: ");
	scanf_s("%d", &ma3);
	printf("Vui long nhap nam sinh thu cung 3: ");
	scanf_s("%d", &nam3);

	tuoi1 = 2025 - nam1;
	tuoi2 = 2025 - nam2;
	tuoi3 = 2025 - nam3;

	printf("\nTen thu cung 1: %s", ten1);
	printf("Ma thu cung 1: %d", ma1);
	printf("\nNam sinh thu cung 1: %d", nam1);
	printf("\nTen thu cung 2: %s", ten2);
	printf("Maa thu cung 2: %d", ma2);
	printf("\nNam sinh thu cung 2: %d", nam2);
	printf("\nTen thu cung 3: %s", ten3);
	printf("Maa thu cung 3: %d", ma3);
	printf("\nNam sinh thu cung 3: %d", nam3);
	printf("\n");
	printf("\nTuoi cua thu cung 1 la: %d", tuoi1);
	printf("\nTuoi cua thu cung 2 la: %d", tuoi2);
	printf("\nTuoi cua thu cung 3 la: %d", tuoi3);

}
void tinhTong()
{
	int n, sum = 0, count = 0;
	printf("Vui long nhap n(n>3); ");
	scanf_s("%d", &n);
	
	if (n < 3)
	{
		printf("\nVui long nhap n (n>3)L ");
	}
	else
	{
		for (int i = 1; i < n; i += 2)
		{
			sum += i;
		}
		printf("\nTong cac so le tu 1 den %d la: %d", n, sum);
		if (n % 5 == 0)
		{
			printf("\n%d chia het cho 5",n);
		}
		else {
			printf("\n%d khong chia het cho 5", n);
		}
	}

}
void thongTinCuaHang()
{
	int n; float sum = 0, count = 0;
	int array[100];
	printf("So luong thu cung: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap so can nang cua thu cung %d: ",i + 1);
		scanf_s("%d",&array[i]);
		sum += array[i];
		count++;
	}
	//tinh can nang trung binh
	float tb = (float)sum / count;
	printf("\nCan nang trung binh cua thu cung la: %.2f", tb);
	//Tinh can nang thap nhat
	float min = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	printf("\nThu cung co can nang thap nhat: %.2f", min);
	//So thu cung co can nang duoi trung binh
	int yeu = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] <= 25)
			yeu++;
	}
	printf("\nSo thu cung co can nang duoi trung binh la: %d", yeu);
}


int main()
{
	int chon;
	do
	{
		printf("\n>>>>MENU<<<<");
		printf("\n0. Thoat");
		printf("\n1. Thong tin thu cung");
		printf("\n2. Tinh tong");
		printf("\n3. Thong tin cua hang");
		printf("\nVui long chon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			laplai(thongTinThuCung);
			break;
		case 2:
			laplai(tinhTong);
			break;
		case 3:
			laplai(thongTinCuaHang);
			break;
		default:
				printf("\nKhong co trong MENU. Vui long chon lai");
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