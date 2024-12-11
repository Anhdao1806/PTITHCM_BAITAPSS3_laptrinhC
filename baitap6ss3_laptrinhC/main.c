#include <stdio.h>

int main() {
    float Day, Cao, DienTich;

    printf("Nhap do dai canh day tam giac: ");
    scanf("%f", &Day);
    printf("Nhap chieu cao tam giac: ");
    scanf("%f", &Cao);
    DienTich = 0.5 * Day * Cao;
    printf("Dien tich tam giac: %.2f\n",DienTich);

    return 0;
}
