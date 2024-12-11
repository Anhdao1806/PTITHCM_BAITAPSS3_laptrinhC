#include <stdio.h>

int main()
{
   int a, b, c , Tong , trungBinh;
   printf("Nhập điểm môn toán: ");
   scanf("%d", &a);
   
   printf("Nhập điểm môn văn: ");
   scanf("%d", &b);
   
   printf("Nhập điểm môn anh: ");
   scanf("%d", &c);
    Tong = a + b +c;
   
   printf("tổng điểm 3 môn: %d\n",Tong);
    trungBinh = (a + b + c)/3;
   printf("điểm trung bình môn là: %d\n",trungBinh);
   
   return 0;
}
