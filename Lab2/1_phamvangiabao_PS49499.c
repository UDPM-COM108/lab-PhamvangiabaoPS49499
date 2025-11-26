//Bai 1 XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ

#include <stdio.h>
#include <math.h>

int main(void) {
int x, y;

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    printf("Nhap so nguyen y: ");
    scanf("%d", &y);

    printf("Tong: %d\n", x + y);
    printf("Hieu: %d\n", x - y);

//Bai 2 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN

int a, b;
int chuvi, dientich;

    printf("nhap chieu rong:");
    scanf("%d", &a);

    printf("nhap chieu dai:");
    scanf("%d", &b);
    
    chuvi = (a + b)*2;
    dientich = a*b;

    printf("chu vi la %d", chuvi);
    printf("\ndien tich la %d", dientich);

//Bai 3 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN

#define  PI 3.14159f

float r;
float chuvihinhtron, dientichhintron;

    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    chuvihinhtron = 2.0f * PI * r;
    dientichhintron = PI * r * r;

    printf("chu vi hinh tron: %.2f\n", chuvihinhtron);
    printf("dien tich hin tron: %.2f\n", dientichhintron);

//Bai 4 Tinh trung diem trung binh 3 mon toan ly hoa

 float diemtoan, diemhoa, diemly;
 float diemtrungbinh;

    printf("nhap diem toan");
    scanf("%f", &diemtoan);

    printf("nhap diem ly");
    scanf("%f", &diemly);

    printf("nhap diem hoa");
    scanf("%f", &diemhoa);

    diemtrungbinh = (diemtoan *3 + diemly *2 + diemly *1) / 6.0f;

    printf("------\n");
    printf("diem trung binh 3 mon cua ban la: %.2f\n", diemtrungbinh);

//Bai 5 Tính chu vi va dien tich tam giac
    
    float canha, canhb, canhc, chuvitamgiac, dientichtamgiac, P;
    
    printf("\nhap do dai 3 canh tam giac: ");
    scanf("%f %f %f", &canha, &canhb, &canhc);

    chuvitamgiac = canha + canhb + canhc;
    P = chuvitamgiac / 2.0f;
    dientichtamgiac = sqrtf(P * (P - canha) * (P - canhb) * (P - canhc));

    printf("chu vi hinh tam giac la: %.f\n", chuvitamgiac);
    printf("dien tich hinh tam giac la: %.f\n", dientichtamgiac);

    return 0;
}