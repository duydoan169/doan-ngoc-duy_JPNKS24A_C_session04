#include <stdio.h>
int main(){
    int number1, number2, number3;
    printf("nhap 3 so nguyen : ");
    scanf("%d %d %d",&number1, &number2, &number3);
    if(number3>=number1 && number3<=number2 || number3>=number2 && number3<=number1 )
        printf("so thu 3 nam trong khoang giua 2 so dau");
    return 0;
}