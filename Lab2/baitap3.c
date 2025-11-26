#include <stdio.h>
#define  PI 3.14159

int main() {
    float r, chuvi, dientich;

    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    chuvi = 2 * PI * r;
    dientich = PI * r * r;

    printf("chu vi hinh tron: %.2f\n", chuvi);
    printf("dien tich hin tron: %.2f\n", dientich);

    return 0;
}