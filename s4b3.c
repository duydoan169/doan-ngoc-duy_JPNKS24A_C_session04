#include <stdio.h>
int main(){
    int number;
    printf("nhap so nguyen : ");
    scanf("%d",&number);
    if(number%3==0 && number%5==0 )
        printf("so vua nhap chia het cho ca 3 va 5");
    else if(number%3==0 || number%5==0)
        printf("so vua nhap chia het cho 3 hoac 5");
    return 0;
}