#include <stdio.h>

// Khai bao cac ham cho cac bai tap
void bai1_tinh_trung_binh_tong();
void bai2_xac_dinh_so_nguyen_to();
void bai3_xac_dinh_so_chinh_phuong();
void bai4_tu_thap_phan_sang_nhi_phan();

void hien_thi_menu() {
    int choice;
    do {
        printf("\n--- CHUONG TRINH CAC BAI TAP LAB 4 ---\n");
        printf("1. Bai 1: Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
        printf("2. Bai 2: Xac dinh so nguyen to\n");
        printf("3. Bai 3: Xac dinh so chinh phuong\n");
        printf("4. Bai 4: Tu thap phan sang nhi phan\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban (0-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai1_tinh_trung_binh_tong();
                break;
            case 2:
                bai2_xac_dinh_so_nguyen_to();
                break;
            case 3:
                bai3_xac_dinh_so_chinh_phuong();
                break;
            case 4:
                bai4_tu_thap_phan_sang_nhi_phan();
                break;    
            case 0:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 0);
}

int main() {
    hien_thi_menu(); 
    return 0;
}
// Bai 1: tinh trung binh tong
void bai1_tinh_trung_binh_tong() {
    printf("\n--- BAI 1: TINH TRUNG BINH TONG ---\n");
    
    // Khai bao 2 bien kieu int: min,max
    int min, max;
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);

    int i = min;
    float tong = 0;
    int bienDem = 0;
    float trungBinh = 0;

    while (i <= max) {
        if (i % 2 == 0) {
            tong = tong + (float)i;
            bienDem = bienDem + 1;
        }
        i = i + 1;
    }

    if (bienDem > 0) {
        trungBinh = tong / (float)bienDem;
    }
    

    printf("Tong cac so chia het cho 2 trong khoang [%d, %d] la: %.0f\n", min, max, tong);
    printf("So luong cac so chia het cho 2 la: %d\n", bienDem);
    printf("Trung binh tong la: %.2f\n", trungBinh); // %.2f de hien thi 2 so thap phan
}


//  BAI 2: XAC DINH SO NGUYEN TO
void bai2_xac_dinh_so_nguyen_to() {
    printf("\n--- BAI 2: XAC DINH SO NGUYEN TO ---\n");

    int x;
    printf("Nhap so nguyen x can kiem tra: ");
    scanf("%d", &x);

    if (x <= 1) { 
        printf("%d khong phai la so nguyen to.\n", x);
        return;
    }
    
    int i;
    int count = 0;

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count = count + 1;
            break;   
        }
    }

    if (count == 0) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai so nguyen to.\n", x);
    }
}


// BAI 3: XAC DINH SO CHINH PHUONG
void bai3_xac_dinh_so_chinh_phuong() {
    printf("\n--- BAI 3: XAC DINH SO CHINH PHUONG ---\n");
    
    int x;
    printf("Nhap so nguyen x can kiem tra: ");
    scanf("%d", &x);

    if (x < 0) { 
        printf("%d khong phai la so chinh phuong.\n", x);
        return;
    }
    
    int i;
    int is_chinh_phuong = 0; 
    
    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            is_chinh_phuong = 1; 
            break; 
        }
    }

    if (is_chinh_phuong == 1) {
        printf("%d la so chinh phuong (%d * %d).\n", x, i, i);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }

}

#include <stdio.h>

// BÀI 4: TU THAP PHAN SANG NHI PHAN (Căn bản)
void bai4_tu_thap_phan_sang_nhi_phan() {
    printf("\n--- BAI 4: TU THAP PHAN SANG NHI PHAN ---\n");
    
    int n;                 
    int temp;              
    int ketQuaNhiPhan[32]; 
    int i = 0;             
    int j;                 

    printf("Nhap so nguyen khong am (thap phan): ");
    if (scanf("%d", &n) != 1) {
        
        while (getchar() != '\n');
        printf("Loi nhap lieu. Vui long nhap so nguyen.\n");
        return;
    }

    if (n < 0) {
        printf("%d khong phai la so nguyen khong am.\n", n);
        return;
    }

    if (n == 0) {
        printf("So nhi phan cua 0 la: 0\n");
        return;
    }
    
    temp = n;

    while (temp > 0) {
    
        ketQuaNhiPhan[i] = temp % 2; 
        temp = temp / 2;
        i++;
    }

    printf("So nhi phan cua %d la: ", n);

    for (j = i - 1; j >= 0; j--) {
        printf("%d", ketQuaNhiPhan[j]);
    }
    printf("\n");
}