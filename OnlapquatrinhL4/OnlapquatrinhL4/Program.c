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
		printf("\nBan co muon tiep tuc chuc nang khong? (y/n): ");
		scanf_s(" %c", &tieptuc);
	} while (tieptuc == 'y');
}
void thongtinmonhoc()
{
	char ten[50];
	int maMon, tinChi;
	const int hocPhiMotTin = 500000;
	while (getchar() != '\n')
	{
		printf("%c", getchar());
	}
	printf("Vui long nhap ten mon hoc: ");
	fgets(ten, sizeof(ten), stdin);
	printf("Vui long nhap ma mon: ");
	scanf_s("%d", &maMon);
	printf("Vui long nhap tin chi: ");
	scanf_s("%d", &tinChi);
	int hocPhi = tinChi * hocPhiMotTin;
	printf("-->Ten mon hoc:%s", ten);
	printf("-->Ma mon hoc: %d", maMon);
	printf("\n-->So tin chi: %d", tinChi);
	printf("\n-->Hoc phi: %d VND", hocPhi);
}
void tinhtongsole()
{
	int n, sum = 0, count = 0;
	printf("\nVui long nhap n (n>0): ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum += i;
	}
	printf("Tong cac so tu 1 den %d la:%d\n", n, sum);
	if (n % 2 == 0) {
		printf("%d la so chan.\n", n);
	}
	else {
		printf("%d la so le.\n", n);
	}
}
void thongtindiemlab()
{
	//nhap diem
	float array[100], count = 0, sum = 0;
    int n;
	printf("Nhap so sinh vien: ");
	scanf_s("%d", &n);
	for (int i = 0;i<n; i++)
	{
		printf("Nhap diem sinh vien %d: ", i + 1);
		scanf_s("%f", &array[i]);
		sum += array[i];
	}
	// xuat diem
	printf("\nDanh sach diem sinh vien:\n");
	for (int i = 0; i < n; i++)
	{
		printf("Diem sinh vien %d: %.3f\n",i + 1,array[i]);
        
	}
	//Tinh diem trung binh
	 float tb = (float)sum / n;
	printf("Diem trung binh la: %.2f", tb);
	//Diem cao nhat
	float max = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	//Diem > 5
	int c=0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] >= 5)
			c++;
	}
	printf("\nDiem cao nhat:%.2f", max);
	printf("\nDiem so lon hon > 5: %d ",c);
}

int main()
{
	int chon;
	do
	{
		printf("\n>>>>MENU<<<<");
		printf("\n0. Thoat");
		printf("\n1. Thong tin mon hoc");
		printf("\n2. Tinh tong so le");
		printf("\n3. Thong tin diem lab");
		printf("\nVui long nhap chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			laplai(thongtinmonhoc);
			break;
		case 2:
			laplai(tinhtongsole);
			break;
		case 3:
			laplai(thongtindiemlab);
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