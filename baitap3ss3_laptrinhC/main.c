#include <stdio.h>

int main(){
    const float Pi = 3.14;
    float banKinh;
    
    printf("Nhập bán kính: ");
    scanf("%f", &banKinh);
    
    
    printf("Chu vi hình tròn là: %.2f\n", banKinh * 2 * Pi);
    printf("diện tích hình tròn là: %.2f", Pi * banKinh * banKinh);
    
    return 0;
}
