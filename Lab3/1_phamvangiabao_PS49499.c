#include <stdio.h>
#include <math.h>

int main() {
    int chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1: Xep loai hoc luc\n");
        printf("2. Bai 2: Giai phuong trinh bac 1\n");
        printf("3. Bai 3: Giai phuong trinh bac 2\n");
        printf("4. Bai 4: Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Moi ban chon bai: ");
        scanf("%d", &chon);

        switch (chon) {

        // ====================== BÀI 1 ======================
        case 1: {
            float diem;
            printf("Nhap diem (0 - 10): ");
            scanf("%f", &diem);

            if (diem < 0 || diem > 10)
                printf("Diem khong hop le!\n");
            else if (diem >= 9)
                printf("Hoc luc: Xuat sac\n");
            else if (diem >= 8)
                printf("Hoc luc: Gioi\n");
            else if (diem >= 6.5)
                printf("Hoc luc: Kha\n");
            else if (diem >= 5)
                printf("Hoc luc: Trung binh\n");
            else if (diem >= 3.5)
                printf("Hoc luc: Yeu\n");
            else
                printf("Hoc luc: Kem\n");
            break;
        }

        // ====================== BÀI 2 ======================
        case 2: {
            float a, b;
            printf("Nhap a, b: ");
            scanf("%f %f", &a, &b);

            if (a == 0) {
                if (b == 0) printf("Phuong trinh vo so nghiem\n");
                else printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem x = %.2f\n", -b/a);
            }
            break;
        }

        // ====================== BÀI 3 ======================
        case 3: {
            float a, b, c, delta, x1, x2;
            printf("Nhap a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0) printf("Vo so nghiem\n");
                    else printf("Vo nghiem\n");
                } else {
                    printf("Nghiem x = %.2f\n", -c/b);
                }
            } else {
                delta = b*b - 4*a*c;
                if (delta < 0)
                    printf("Phuong trinh vo nghiem\n");
                else if (delta == 0)
                    printf("Nghiem kep x = %.2f\n", -b/(2*a));
                else {

                    x1 =(float)((-b + sqrt(delta))) / (2 * a);
                    x2 = (float)((-b - sqrt(delta))) / (2*a);

                    printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
            }
            break;
        }

        // ====================== BÀI 4 ======================
        case 4: {
           int kwh;
           double tien = 0;

            printf("Nhap so kWh tieu thu: ");
            scanf("%d", &kwh);

            if (kwh <= 50)
                tien = kwh * 1678;
            else if (kwh <= 100)
                tien = 50 * 1678.0 + (kwh-50)*1734.0;
            else if (kwh <= 200)
                tien = 50 * 1678.0 + 50*1734.0 + (kwh-100)*2014.0;
            else if (kwh <= 300)
                tien = 50 *1678.0 + 50*1734.0 + 100*2014.0 + (kwh-200)*2536.0;
            else if (kwh <= 400)
                tien = 50 * 1678.0 + 50*1734.0 + 100*2014.0 + 100*2536.0 + (kwh-300)*2834.0;
            else
                tien = 50 * 1678.0 + 50*1734.0 + 100*2014.0 + 100*2536 + 100*2834.0 + (kwh-400)*2927.0;

            printf("Tien dien: %.0f dong\n", tien);
            break;
        }

        case 0:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
            break;
        }

    } while (chon != 0);

    return 0;
}
