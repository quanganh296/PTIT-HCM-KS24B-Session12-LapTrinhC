#include<stdio.h>


void TinhTong(int a,int b,int *tong){
*tong=a+b;
}

int main() {
    int a;
    int b;
    
    printf("Hay nhap so a: ");
  scanf("%d",&a);
    printf("Hay nhap so b: ");
 scanf("%d",&b);
 int tinhtong;
       TinhTong(a, b,&tinhtong);
    printf("Tong 2 so: %d",tinhtong);
    return 0;     
}
