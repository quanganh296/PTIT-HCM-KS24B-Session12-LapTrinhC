#include<stdio.h>
#include<math.h>

void isPerfectNumber(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
if(n%i==0){
    sum+=i; 
    
}
    }
    if(sum==n){
printf("%d la so hoan hao.\n", n);
    }
    else{
        printf("%d khong phai so hoan hao.\n", n); }

}

int main() {
    int num1,num2;
    
    printf("Nhap so thu nhat: ");
    scanf("%d",&num1);
     printf("Nhap so thu hai: ");
     scanf("%d",&num2);
     
  isPerfectNumber(num1);
    isPerfectNumber(num2);
   
    
    return 0;     
}
