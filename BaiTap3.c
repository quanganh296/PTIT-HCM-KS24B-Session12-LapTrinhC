#include<stdio.h>


void GiaiThua(int n){
    int giaithua=1;
    printf("Tong giai thua cua %d la: ",n);
for(int i=1;i<=n;i++){
   
        giaithua*=i;  
} printf("%d ",giaithua);
printf("\n");
}

int main() {
    int n;
    int giaithua;
    printf("Nhap so nguyen bat ki: ");
    scanf("%d",&n);
  GiaiThua (n);
   
    
    return 0;     
}
