#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

typedef struct {
	char ten[100];
	float diem_toan;
	float diem_van;
}hoc_sinh;

//bài 1: 
void nhap(hoc_sinh* hs) {
	printf("ten: ");
	fgets(hs->ten, sizeof(hs->ten), stdin);
	printf("Diem toan: ");
	scanf("%f", &hs->diem_toan);
	printf("Diem Van: ");
	scanf("%f", &hs->diem_van);
	getchar();
}

//bài 3: 
void trung_binh(hoc_sinh ds[], int n) {
	int max = 0;
	float max_tb = (ds[0].diem_toan + ds[0].diem_van) / 2;

	for (int i = 1; i < n; i++) {
		float tb = (ds[i].diem_toan + ds[i].diem_van) / 2;
		if (tb > max_tb) {
			max_tb = tb;
			max = i;
		}
	}
	printf("\nHoc sinh co diem trung binh cao nhat:\n");
	printf("Ten: %s", ds[max].ten);
	printf("Diem Toan: %.2f\n", ds[max].diem_toan);
	printf("Diem Van: %.2f\n", ds[max].diem_van);
	printf("Diem Trung Binh: %.2f\n", max_tb);
}


int main() {
	int n;
	hoc_sinh danh_sach[MAX];
	printf("Nhap so luong hoc sinh: ");
	scanf("%d", &n);
	getchar(); 

	for (int i = 0; i < n; i++) {
		printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);
		nhap(& danh_sach[i]);
	}
	trung_binh(danh_sach, n);
	return 0;
}



