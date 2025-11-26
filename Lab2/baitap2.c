// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>

int main () {
    int a, b, chuvi, dientich;

    printf("nhap chieu rong:");

    scanf("%d", &a);

    printf("nhap chieu dai:");

    scanf("%d", &b);
    
    chuvi = (a + b)*2;

    dientich = a*b;

    printf("chu vi la %d", chuvi);

    printf("\ndien tich la %d", dientich);
    
    return 0;
}