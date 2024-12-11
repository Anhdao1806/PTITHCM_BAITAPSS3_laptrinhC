#include <stdio.h>

int main(){
    float  C , F ;
    printf("Nhập C: ");
    scanf ("%f",&C);
    F = (C * 9 / 5) + 32;
    printf("Độ C sang độ F là: %f",F);
    return 0;
}
