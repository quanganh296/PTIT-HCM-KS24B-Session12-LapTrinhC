#include<stdio.h>


void Max(int n,int arr[]){
    int max=arr[0];
    for(int i=1;i<n;i++){
if(arr[i]>max){
    max=arr[i];
}
    }

printf("So lon nhat la: %d",max);
}

int main() {
    int n;
    
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    int arr[n];
     printf("Nhap cac phan tu trong mang: \n");
     for(int i=0;i<n;i++){
        printf("Phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
     }
  Max(n,arr);
   
    
    return 0;     
}
