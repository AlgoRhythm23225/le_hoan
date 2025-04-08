#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {
	NAM,
	NU
}gioi_tinh_t;
char* convert_gioiTinh_string[] = { "Nam","Nu" };

typedef enum {
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
}loai_t;
char* convert_loai_string[] = { "Gioi", "Kha", "Trung binh", "Yeu" };

typedef struct {
	char* ten;
	int tuoi;
	gioi_tinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
}hoc_sinh_t;

void xep_loai(hoc_sinh_t* arr, int so_luong) {
	float TB = 0;
	for (int i = 0; i < so_luong; i++) {
		TB = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (TB >= 8)
			arr[i].loai = GIOI;
		else if (TB>=6.5)
			arr[i].loai = KHA;
		else if (TB>=5)
			arr[i].loai = TRUNG_BINH;
		else
			arr[i].loai = YEU;			
	}	
}

void in_ds(hoc_sinh_t* arr, int so_luong) {
	for (int i = 0; i < 3; i++) {
		float diem_tb = (arr[i].diem_toan + arr[i].diem_van) / 2;
		printf("Ten: %s ", arr[i].ten);
		printf("Tuoi: %d ", arr[i].tuoi);
		printf("Gioi tinh: %s ", convert_gioiTinh_string[arr[i].gioi_tinh]);
		printf("Diem toan: %.1f ", arr[i].diem_toan);
		printf("Diem van: %.1f ", arr[i].diem_van);
		printf("Diem TB: %.1f ", diem_tb);
		printf("Xep loai: %s ", convert_loai_string[arr[i].loai]);
		printf("\n");
	}
}
//arr --> hoc_sinh_t* 
//*arr -->hoc_sinh_t
//*(arr+0) --> hoc_sinh_t
//arr[0] 
int main() {
	hoc_sinh_t arr[] = {
		{"Nguyen Van A", 18, NAM, 6.7, 7.4},
		{"Nguyen Thi B", 18, NU, 8.7, 7.9},
		{"Nguyen Van C", 18, NAM, 5.7, 5.4}
	};

	xep_loai(arr, 3);
	in_ds(arr, 3);
}

