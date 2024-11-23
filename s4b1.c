#include <stdio.h>
int main(){
    int number;
    printf("nhap so nguyen khac 0: ");
    scanf("%d",&number);
    if(number>0)
        printf("so duong");
    else 
        printf("so am");
    return 0;
}