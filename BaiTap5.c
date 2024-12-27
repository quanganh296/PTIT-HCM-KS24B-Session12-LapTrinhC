#include<stdio.h>
#include<math.h>

void isPrime(int n){
    if(n<=1){
        printf("%d khong phai so nguyen to.\n", n);
        return;
    }
    for(int i=2;i<=sqrt(n);i++){
if(n%i==0){
     printf("%d khong phai so nguyen to.\n", n);
    return;
}
    }
      printf("%d la so nguyen to.\n", n);  

}

int main() {
    int num1,num2;
    
    printf("Nhap so thu nhat: ");
    scanf("%d",&num1);
     printf("Nhap so thu hai: ");
     scanf("%d",&num2);
     
  isPrime(num1);
    isPrime(num2);
   
    
    return 0;     
}
